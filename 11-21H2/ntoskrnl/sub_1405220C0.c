/*
 * XREFs of sub_1405220C0 @ 0x1405220C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     sub_140522138 @ 0x140522138 (sub_140522138.c)
 *     sub_1405221D0 @ 0x1405221D0 (sub_1405221D0.c)
 */

__int64 __fastcall sub_1405220C0(__int64 a1)
{
  bool v1; // zf
  __int64 v4; // rdi
  __int64 v5; // rax

  v1 = *(_DWORD *)(a1 + 44) == 0;
  *(_BYTE *)(a1 + 40) = 0;
  if ( !v1 )
    return 0LL;
  v4 = sub_1403BE664(1413563479);
  v5 = sub_1403BE664(1414677591);
  if ( v4 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = v4;
    return sub_140522138(a1);
  }
  else if ( v5 )
  {
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = v5;
    return sub_1405221D0(a1);
  }
  else
  {
    return 3221225473LL;
  }
}
