/*
 * XREFs of sub_14074382C @ 0x14074382C
 * Callers:
 *     sub_14077F420 @ 0x14077F420 (sub_14077F420.c)
 * Callees:
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14074382C(__int64 a1, int a2, _QWORD *a3)
{
  void *v5; // rcx
  char v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  void *v11; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v11 = 0LL;
  if ( !a2 || (a2 & 0xFFFFFCE8) != 0 )
  {
    v7 = -1073741811;
LABEL_19:
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v7;
  }
  *a3 = 0LL;
  if ( (a2 & 0xF00) == 0 )
  {
    if ( (v8 = (unsigned __int8)a2, (unsigned __int8)a2 == 17)
      || (unsigned __int8)a2 == 18 && *(_BYTE *)(a1 + 4)
      || (unsigned int)(unsigned __int8)a2 - 19 <= 1 )
    {
      if ( *(_DWORD *)a1 >= 0xA000000u && ((unsigned __int8)a2 == 17 || (unsigned __int8)a2 == 18 && *(_BYTE *)(a1 + 4)) )
        v6 = 1;
      LOBYTE(v8) = v6;
      v9 = sub_1407438D8(v8, &v11);
      v5 = v11;
      v7 = v9;
      if ( v9 >= 0 )
      {
        *a3 = v11;
        return v7;
      }
      goto LABEL_19;
    }
  }
  return v7;
}
