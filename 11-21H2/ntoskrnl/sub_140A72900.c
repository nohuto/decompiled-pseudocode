/*
 * XREFs of sub_140A72900 @ 0x140A72900
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A70F24 @ 0x140A70F24 (sub_140A70F24.c)
 */

__int64 __fastcall sub_140A72900(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rcx
  __int64 **v3; // rdx

  if ( *(_DWORD *)(a1 + 220) != 3 )
  {
    v1 = sub_140A70F24(a1);
    if ( v1 )
    {
      v2 = *v1;
      if ( *(__int64 **)(*v1 + 8) != v1 || (v3 = (__int64 **)v1[1], *v3 != v1) )
        __fastfail(3u);
      *v3 = (__int64 *)v2;
      *(_QWORD *)(v2 + 8) = v3;
      --dword_140C4A180;
    }
  }
  return 0LL;
}
