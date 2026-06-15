/*
 * XREFs of ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x18003DF80
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18003E614 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800343F0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18003E430 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

__int64 __fastcall ATL::CSid::operator=(__int64 a1, void *a2)
{
  DWORD LengthSid; // eax
  int Error; // eax

  if ( !*(_BYTE *)(a1 + 76) || (void *)(a1 + 8) != a2 )
  {
    *(_DWORD *)(a1 + 80) = 7;
    ATL::CSimpleStringT<unsigned short,0>::Empty((int **)(a1 + 88));
    ATL::CSimpleStringT<unsigned short,0>::Empty((int **)(a1 + 96));
    ATL::CSimpleStringT<unsigned short,0>::Empty((int **)(a1 + 104));
    ATL::CSimpleStringT<unsigned short,0>::Empty((int **)(a1 + 112));
    *(_BYTE *)(a1 + 76) = 0;
    if ( !IsValidSid(a2) || (LengthSid = GetLengthSid(a2), LengthSid > 0x44) )
      ATL::AtlThrowImpl(-2147024809);
    *(_BYTE *)(a1 + 76) = 1;
    if ( !CopySid(LengthSid, (PSID)(a1 + 8), a2) )
    {
      Error = ATL::AtlHresultFromLastError();
      *(_BYTE *)(a1 + 76) = 0;
      ATL::AtlThrowImpl(Error);
    }
    *(_DWORD *)(a1 + 80) = 8;
  }
  return a1;
}
