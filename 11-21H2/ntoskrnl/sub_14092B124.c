/*
 * XREFs of sub_14092B124 @ 0x14092B124
 * Callers:
 *     sub_14092AC5C @ 0x14092AC5C (sub_14092AC5C.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

signed __int64 __fastcall sub_14092B124(__int64 a1, int a2, __int64 a3)
{
  char v3; // si
  int ProcessSessionId; // ebx
  _RTL_RUN_ONCE *v8; // rdi
  __int64 v9; // r14
  signed __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  int Ptr; // eax
  __int64 v14; // rdx

  v3 = 1;
  if ( (a2 & 1) != 0 )
  {
    ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(a3) || ProcessSessionId == -1 )
      v3 = 0;
  }
  v8 = &stru_140C5A870;
  v9 = 8LL;
  do
  {
    result = (signed __int64)sub_140281870((signed __int64 *)v8);
    v12 = result;
    if ( result )
    {
      Ptr = (int)v8[1].Ptr;
      if ( (Ptr & a2) != 0 && ((Ptr & 4) == 0 || v3) )
      {
        sub_14042A5E0(a1 + 0x4000, v11);
        if ( (int)sub_14042A5E0(sub_140540280, sub_14092B240) < 0 )
          sub_14042A5E0(a1 + 0x4000, v14);
      }
      result = sub_140281930((signed __int64 *)v8, v12);
    }
    v8 += 2;
    --v9;
  }
  while ( v9 );
  return result;
}
