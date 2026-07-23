/*
 * XREFs of sub_1407B0EB0 @ 0x1407B0EB0
 * Callers:
 *     sub_14066AA00 @ 0x14066AA00 (sub_14066AA00.c)
 *     sub_1407B0A20 @ 0x1407B0A20 (sub_1407B0A20.c)
 *     sub_1409663D0 @ 0x1409663D0 (sub_1409663D0.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407B0EB0(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char v3; // r10
  __int64 v4; // r9
  __int64 result; // rax

  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v3 )
  {
    v4 = a1 & 3;
    if ( (a1 & 3) != 0 )
      goto LABEL_9;
  }
  else
  {
    v4 = a1 & 3;
  }
  if ( _bittest16((const signed __int16 *)(a1 + 4), 0xCu) )
  {
    *a2 = *(_DWORD *)(a1 + 16);
    result = *(unsigned int *)(a1 + 20);
    goto LABEL_7;
  }
  if ( v3 && v4 )
LABEL_9:
    ExRaiseDatatypeMisalignment();
  *a2 = *(_DWORD *)(a1 + 24);
  result = *(unsigned int *)(a1 + 32);
LABEL_7:
  *a3 = result;
  return result;
}
