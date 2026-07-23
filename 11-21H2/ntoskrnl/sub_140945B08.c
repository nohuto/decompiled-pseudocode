/*
 * XREFs of sub_140945B08 @ 0x140945B08
 * Callers:
 *     sub_14081FF7C @ 0x14081FF7C (sub_14081FF7C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140820188 @ 0x140820188 (sub_140820188.c)
 */

__int64 __fastcall sub_140945B08(__int64 a1, unsigned int a2, _QWORD **a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v8; // r8
  __int64 v9; // rbx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a3;
  v10 = 0LL;
  *(_OWORD *)v11 = 0LL;
  result = 0LL;
  while ( v3 != a3 )
  {
    v8 = v3;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v8 + 17) )
    {
      v9 = *(v8 - 8);
      DWORD2(v10) = 0;
      v11[0] = 0LL;
      sub_140820188(a1, a2, *(v8 - 7), *((_BYTE *)v8 - 72), v11, (unsigned int *)&v10 + 2);
      result = sub_14042A5E0(*(_QWORD *)(v9 + 8), 1LL);
      if ( (int)result < 0 )
        break;
    }
  }
  return result;
}
