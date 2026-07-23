/*
 * XREFs of sub_1409EC9EC @ 0x1409EC9EC
 * Callers:
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 __fastcall sub_1409EC9EC(__int64 a1, unsigned int a2, _DWORD *a3)
{
  char v6; // r14
  unsigned int v8; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ebx
  __int64 v13; // rax

  v6 = 0;
  if ( !qword_140D3CE38 || PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  *a3 = 24;
  if ( a2 < 0x18 )
    return 3221225476LL;
  v8 = (unsigned __int16)*(_QWORD *)(a1 + 8);
  if ( v8 == 0xFFFF )
    v8 = *(unsigned __int8 *)(qword_140D05008 + 4232);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v10 = sub_140797594(qword_140D05008, v8, 1);
  v11 = v10;
  if ( v10 )
  {
    v12 = sub_14079435C(1u, v10);
    if ( v12 >= 0 )
    {
      v13 = *(_QWORD *)(v11 + 1088);
      if ( v13 )
        v6 = *(_BYTE *)(v13 + 32);
    }
    sub_1407981E8((unsigned int *)v11, 1);
  }
  else
  {
    v12 = -1073741162;
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v12 >= 0 )
    *(_BYTE *)(a1 + 16) = v6;
  return (unsigned int)v12;
}
