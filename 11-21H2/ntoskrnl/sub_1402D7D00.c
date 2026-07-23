/*
 * XREFs of sub_1402D7D00 @ 0x1402D7D00
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x1407598D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140759990 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 */

__int64 __fastcall sub_1402D7D00(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rcx
  __int64 EffectiveServerSilo; // rax
  _QWORD *v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // rbp
  unsigned int v17; // eax
  unsigned __int16 v18; // ax
  __int64 v19; // r11
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v12 = *((_QWORD *)CurrentThread + 203);
  if ( v12 == -3 )
    EffectiveServerSilo = *(_QWORD *)(*((_QWORD *)CurrentThread + 68) + 2160LL);
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo(v12);
  if ( EffectiveServerSilo )
    v14 = *(_QWORD **)(EffectiveServerSilo + 1464);
  else
    v14 = &unk_140D32580;
  v15 = a5;
  v16 = v14[154];
  v17 = a5;
  if ( a5 >= a2 )
    v17 = a2;
  if ( a3 )
    *a3 = v17;
  if ( v17 )
  {
    do
    {
      v18 = sub_1403477B0(v16, *(unsigned __int16 *)(a7 + 2LL * *(unsigned __int8 *)(*a4 + a6)));
      ++a1;
      ++a4;
      *(_BYTE *)(a1 - 1) = *(_BYTE *)(v18 + a6);
    }
    while ( v19 != 1 );
  }
  result = 2147483653LL;
  if ( v15 <= a2 )
    return 0LL;
  return result;
}
