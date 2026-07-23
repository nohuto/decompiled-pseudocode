/*
 * XREFs of sub_14083008C @ 0x14083008C
 * Callers:
 *     sub_14082FBD4 @ 0x14082FBD4 (sub_14082FBD4.c)
 * Callees:
 *     sub_1403C6028 @ 0x1403C6028 (sub_1403C6028.c)
 *     ZwQueryInstallUILanguage @ 0x14041E240 (ZwQueryInstallUILanguage.c)
 *     sub_14082EFE4 @ 0x14082EFE4 (sub_14082EFE4.c)
 *     sub_14082FC44 @ 0x14082FC44 (sub_14082FC44.c)
 *     sub_14082FF1C @ 0x14082FF1C (sub_14082FF1C.c)
 *     sub_14082FFE4 @ 0x14082FFE4 (sub_14082FFE4.c)
 *     sub_1408303C0 @ 0x1408303C0 (sub_1408303C0.c)
 */

__int64 __fastcall sub_14083008C(__int64 a1)
{
  int InstallUILanguage; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 result; // rax

  InstallUILanguage = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( PsUILanguageComitted )
  {
    InstallUILanguage = ZwQueryInstallUILanguage((LANGID *)(a1 + 4));
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_10;
    sub_14082EFE4(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  sub_14082FC44(a1, 0x3FFu);
  v3 = sub_14082FF1C();
  *(_QWORD *)(a1 + 24) = v3;
  if ( !v3 )
  {
    InstallUILanguage = -1073741801;
LABEL_10:
    sub_14082FC44(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  v4 = sub_14082FFE4(-1, -1);
  *(_QWORD *)(a1 + 32) = v4;
  if ( !v4 )
    goto LABEL_10;
  *(_DWORD *)a1 |= 2u;
  InstallUILanguage = sub_1403C6028(a1);
  if ( InstallUILanguage < 0 )
    goto LABEL_10;
  result = sub_1408303C0(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_10;
  return result;
}
