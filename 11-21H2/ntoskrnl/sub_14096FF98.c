/*
 * XREFs of sub_14096FF98 @ 0x14096FF98
 * Callers:
 *     sub_1406FA990 @ 0x1406FA990 (sub_1406FA990.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140540EA0 @ 0x140540EA0 (sub_140540EA0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall sub_14096FF98(struct _FILE_OBJECT *a1)
{
  _DWORD *result; // rax
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx

  result = sub_1402828F0(64, 0x28uLL, 0x3246694Du);
  v3 = 0LL;
  v4 = result;
  if ( result )
  {
    *(_QWORD *)result = 2LL;
    if ( (int)sub_140540EA0(a1, 2, 0LL, 0x40000000LL, result) >= 0 )
    {
      v5 = v4[1];
      if ( v5 == 1 )
      {
        if ( (v4[2] & 0x3FFFF) == 0 && *((_QWORD *)v4 + 2) == 0x40000LL )
          v3 = 0x40000LL;
      }
      else if ( v5 == 2 )
      {
        v6 = *((_QWORD *)v4 + 2);
        if ( v6 + *((_QWORD *)v4 + 4) == 0x40000 && (v6 & 0xF) == 0 )
          v3 = *((_QWORD *)v4 + 2);
      }
    }
    ExFreePoolWithTag(v4, 0);
    return (_DWORD *)v3;
  }
  return result;
}
