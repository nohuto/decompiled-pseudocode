/*
 * XREFs of sub_14082FBD4 @ 0x14082FBD4
 * Callers:
 *     sub_1403C62EC @ 0x1403C62EC (sub_1403C62EC.c)
 * Callees:
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_1403C64C0 @ 0x1403C64C0 (sub_1403C64C0.c)
 *     sub_14082FC44 @ 0x14082FC44 (sub_14082FC44.c)
 *     sub_14083008C @ 0x14083008C (sub_14083008C.c)
 *     sub_140830634 @ 0x140830634 (sub_140830634.c)
 */

__int64 __fastcall sub_14082FBD4(__int64 a1)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v2 = sub_1403C64C0(a1);
  if ( v2 < 0 )
    DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", v2);
  result = sub_14083008C(a1);
  if ( (int)result >= 0 )
  {
    sub_14082FC44(a1, 4LL);
    result = sub_140830634(v4, &v6, a1);
    if ( (int)result >= 0 )
    {
      v5 = v6;
      if ( v6 )
      {
        *(_DWORD *)a1 |= 4u;
        *(_QWORD *)(a1 + 40) = v5;
      }
    }
  }
  return result;
}
