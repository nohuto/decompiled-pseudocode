/*
 * XREFs of sub_1403A55B8 @ 0x1403A55B8
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_14095E6D4 @ 0x14095E6D4 (sub_14095E6D4.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1403A56D0 @ 0x1403A56D0 (sub_1403A56D0.c)
 *     sub_1403A56FC @ 0x1403A56FC (sub_1403A56FC.c)
 *     sub_14080EA40 @ 0x14080EA40 (sub_14080EA40.c)
 */

__int64 __fastcall sub_1403A55B8(_QWORD *a1, int a2, int a3, unsigned int a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  _QWORD *v9; // rbp
  unsigned int v10; // edi
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r8
  KIRQL v15; // r11
  _QWORD *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r10
  _QWORD *v20; // rcx
  __int64 v21; // rcx

  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = KeAcquireQueuedSpinLock(0xAuLL);
  v13 = 0LL;
  v14 = 1LL;
  v15 = v11;
  if ( a2 > 0 )
  {
    v16 = a1;
    while ( 1 )
    {
      a5 = 0LL;
      v10 = sub_1403A56FC(&a1[v13], v12, &a5);
      sub_1403A56D0(v18, v17, 1LL, 1LL);
      if ( a3 )
      {
        if ( v10 )
        {
          v9 = a5;
          goto LABEL_16;
        }
      }
      else if ( !v10 )
      {
        KeReleaseQueuedSpinLock(0xAuLL, v15);
        sub_14080EA40(*v16, a4);
        v15 = KeAcquireQueuedSpinLock(0xAuLL);
        v14 = 1LL;
      }
      v13 = (unsigned int)(v14 + v13);
      ++v16;
      if ( (int)v13 >= a2 )
      {
        v9 = a5;
        break;
      }
    }
  }
  if ( a3 )
  {
LABEL_16:
    if ( v10 )
    {
      if ( v5 )
        *v5 = v9;
      if ( (int)v13 >= 0 )
      {
        v20 = &a1[(int)v13];
        do
        {
          sub_1403A56D0(v20, v12, v14, 0LL);
          v20 = (_QWORD *)(v21 - 8);
          LODWORD(v13) = v13 - v14;
        }
        while ( (int)v13 >= 0 );
      }
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v15);
  if ( !a3 )
    return 1;
  return v10;
}
