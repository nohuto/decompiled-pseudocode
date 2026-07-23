/*
 * XREFs of sub_14051FFF8 @ 0x14051FFF8
 * Callers:
 *     sub_140521800 @ 0x140521800 (sub_140521800.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405206E4 @ 0x1405206E4 (sub_1405206E4.c)
 *     sub_1405213F0 @ 0x1405213F0 (sub_1405213F0.c)
 */

__int64 __fastcall sub_14051FFF8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  int v9; // ebx
  __int32 v10; // ebp
  int v11; // eax
  size_t v12; // r14
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  unsigned __int16 *v16; // rax
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  _QWORD *v25; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v28; // eax
  __int64 v29; // r8
  bool v30; // zf
  unsigned __int16 *v32[2]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v33; // [rsp+30h] [rbp-48h]
  int v34; // [rsp+32h] [rbp-46h]
  __int16 v35; // [rsp+36h] [rbp-42h]
  unsigned int v37; // [rsp+98h] [rbp+20h] BYREF

  v34 = 0;
  v35 = 0;
  v9 = 0;
  v37 = 0;
  v10 = 1;
  *a6 = -1LL;
  if ( a4 )
  {
    v10 = _InterlockedExchange(&dword_140C4A448, 1);
    if ( v10 )
      return (unsigned int)-1073741670;
    v11 = dword_140C4A464;
    if ( *(_DWORD *)(a4 + 8) )
      v11 = *(_DWORD *)(a4 + 8);
    dword_140C4A444 = v11;
  }
  v12 = 8 * (unsigned int)sub_1403B3BA0() + 40;
  v14 = (_QWORD *)sub_1403B1F04(v13, v12);
  v15 = v14;
  if ( v14 )
  {
    memset(v14, 0, v12);
    v15[2] = a2;
    if ( a4 )
      v15[3] = *(_QWORD *)a4;
    v16 = *(unsigned __int16 **)(a3 + 8);
    v32[0] = (unsigned __int16 *)a3;
    v17 = a5;
    v32[1] = v16;
    v33 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v37, v32) )
    {
      v9 = sub_1405206E4(v37, a1, v17);
      if ( v9 < 0 )
        goto LABEL_23;
      v18 = v37;
      v15[v37 + 4] = a1;
      if ( a4 )
      {
        v19 = qword_140C4A420 + 160 * v18;
        if ( byte_140C4A428 )
        {
          v20 = *(_QWORD *)(v19 + 32);
          v21 = *(_QWORD *)(v19 + 48);
        }
        else
        {
          v20 = *(unsigned int *)(v19 + 16);
          v21 = *(unsigned int *)(v19 + 24);
        }
        v22 = v20 + (unsigned int)(dword_140C4A444 * *(_DWORD *)(a4 + 12));
        if ( v22 >= v21 )
        {
          v9 = -1073741811;
LABEL_23:
          sub_1405213F0(v15);
          sub_1403B1B5C(v23, (__int64)v15);
          goto LABEL_24;
        }
        if ( !byte_140C4A428 )
          v22 = (unsigned int)v22;
        *(_QWORD *)(v19 + 56) = v22;
        v9 = 0;
      }
    }
    v24 = KeAcquireSpinLockRaiseToDpc(&qword_140C4A410);
    v25 = (_QWORD *)qword_140C4A438;
    if ( *(__int64 **)qword_140C4A438 != &qword_140C4A430 )
      __fastfail(3u);
    *v15 = &qword_140C4A430;
    v15[1] = v25;
    *v25 = v15;
    qword_140C4A438 = (__int64)v15;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4A410);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v29 = *((_QWORD *)CurrentPrcb + 4375);
          v30 = (v28 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v28;
          if ( v30 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v24);
    *a6 = v15;
  }
  else
  {
    v9 = -1073741801;
LABEL_24:
    if ( a4 && !v10 )
    {
      dword_140C4A444 = 0;
      dword_140C4A448 = 0;
    }
  }
  return (unsigned int)v9;
}
