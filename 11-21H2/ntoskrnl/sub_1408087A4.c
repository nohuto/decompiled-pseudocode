/*
 * XREFs of sub_1408087A4 @ 0x1408087A4
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1403B6E4C @ 0x1403B6E4C (sub_1403B6E4C.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     sub_140A5464C @ 0x140A5464C (sub_140A5464C.c)
 */

void sub_1408087A4()
{
  ULONG_PTR v0; // rbx
  REGHANDLE v1; // rcx
  __int64 v2; // rax
  _DWORD *v3; // rax
  __int64 v4; // rdx

  v0 = qword_140C22800;
  if ( qword_140C22800 )
  {
    sub_140A5464C();
    v1 = qword_140C04600;
    qword_140C04600 = 0LL;
    dword_140C045E0 = 0;
    EtwUnregister(v1);
    v2 = *(_QWORD *)(v0 + 216);
    if ( v2 )
    {
      v3 = *(_DWORD **)(v2 + 32);
      if ( *v3 == 1281517896 )
      {
        v4 = (unsigned int)v3[3];
        if ( (_DWORD)v4 )
          sub_1403B6E4C((unsigned __int64)v3 + (unsigned int)v3[2], v4);
      }
    }
  }
}
