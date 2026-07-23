/*
 * XREFs of sub_140B2BE4C @ 0x140B2BE4C
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140B2BEEC @ 0x140B2BEEC (sub_140B2BEEC.c)
 *     sub_140B2BF58 @ 0x140B2BF58 (sub_140B2BF58.c)
 */

__int64 __fastcall sub_140B2BE4C(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rax
  ULONG_PTR v4; // rdx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = 0;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3
    || (v2 = *(_QWORD *)(v3 + 2904)) == 0
    || (v4 = *(unsigned int *)(v2 + 64), !(_DWORD)v4)
    || (v1 = sub_140B2BF58(*(unsigned int *)(v2 + 60) + v2 + 72, v4), v1 >= 0) )
  {
    sub_140B2BEEC();
    if ( qword_140C1B900 )
    {
      v1 = sub_14042A5E0(v2, &v6);
      if ( v1 >= 0 )
      {
        qword_140D68758 = v6;
        dword_140D686F8 = 0;
      }
    }
  }
  return (unsigned int)v1;
}
