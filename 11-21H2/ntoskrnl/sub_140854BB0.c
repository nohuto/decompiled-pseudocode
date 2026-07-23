/*
 * XREFs of sub_140854BB0 @ 0x140854BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140854BB0(__int64 *a1, int a2, int a3, int a4)
{
  unsigned __int8 v6; // cl
  __int64 result; // rax
  char *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 v13[5]; // [rsp+60h] [rbp-28h] BYREF

  Object = 0LL;
  v13[0] = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 && ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *a1 = 0LL;
  if ( a4 )
    return 3221225714LL;
  result = sub_14072B3B0(v6, qword_140D05280, a3, v6, v11, 1536, 0, 0, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = (char *)Object;
    v9 = (char *)Object + 8;
    v10 = 64LL;
    do
    {
      *(v9 - 1) = 0LL;
      v9[1] = v9;
      *v9 = v9;
      v9 += 3;
      --v10;
    }
    while ( v10 );
    result = sub_140729C30(v8, 0LL, a2, 0, 0, 0LL, v13);
    if ( (int)result >= 0 )
    {
      *a1 = v13[0];
      return (unsigned int)result;
    }
  }
  return result;
}
