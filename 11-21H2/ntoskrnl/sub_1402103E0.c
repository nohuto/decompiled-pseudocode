/*
 * XREFs of sub_1402103E0 @ 0x1402103E0
 * Callers:
 *     sub_140208284 @ 0x140208284 (sub_140208284.c)
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_140210224 @ 0x140210224 (sub_140210224.c)
 *     sub_140266BBC @ 0x140266BBC (sub_140266BBC.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     sub_140291380 @ 0x140291380 (sub_140291380.c)
 *     sub_140291710 @ 0x140291710 (sub_140291710.c)
 *     sub_140291A94 @ 0x140291A94 (sub_140291A94.c)
 *     sub_140291C10 @ 0x140291C10 (sub_140291C10.c)
 *     ntoskrnl_6 @ 0x14029B310 (ntoskrnl_6.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 *     sub_1402B4AE0 @ 0x1402B4AE0 (sub_1402B4AE0.c)
 *     sub_1402B7AE0 @ 0x1402B7AE0 (sub_1402B7AE0.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_1403424A0 @ 0x1403424A0 (sub_1403424A0.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_14035B110 @ 0x14035B110 (sub_14035B110.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_14035F144 @ 0x14035F144 (sub_14035F144.c)
 *     sub_1405737B4 @ 0x1405737B4 (sub_1405737B4.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402103E0(__int64 a1, __int64 a2, __int64 a3, char a4, bool *a5)
{
  __int64 v5; // r8
  bool v6; // r11
  __int64 result; // rax
  int v8; // ebx

  v5 = a2;
  v6 = a5 && *(_QWORD *)(a2 + 120);
  result = 0LL;
  v8 = 0;
  if ( *(char *)(a1 + 195) < 16
    && (*(_DWORD *)(a1 + 120) & 0x200) == 0
    && (!a4 || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1) )
  {
    do
    {
      if ( (*(_BYTE *)(a2 + 112) & 2) != 0 )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_11;
      }
      a2 = *(_QWORD *)(a2 + 408);
    }
    while ( a2 );
    do
    {
      result = (unsigned int)(*(_DWORD *)(v5 + 116) + result);
      if ( v6 )
      {
        v8 += **(_DWORD **)(v5 + 120);
      }
      else if ( (_DWORD)result )
      {
        break;
      }
      v5 = *(_QWORD *)(v5 + 408);
    }
    while ( v5 );
  }
LABEL_11:
  if ( a5 )
    *a5 = v8 != 0;
  return result;
}
