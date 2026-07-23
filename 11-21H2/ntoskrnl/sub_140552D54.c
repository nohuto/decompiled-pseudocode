/*
 * XREFs of sub_140552D54 @ 0x140552D54
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 * Callees:
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140554090 @ 0x140554090 (sub_140554090.c)
 */

void __fastcall sub_140552D54(int a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-10h] BYREF
  int v4; // [rsp+78h] [rbp+38h] BYREF

  v3 = 0LL;
  v4 = 8;
  if ( !dword_140D01890 && (unsigned __int8)sub_140554090() )
  {
    dword_140D01898 = 1;
    if ( qword_140D00A80 )
    {
      LODWORD(v3) = a1;
      WORD2(v3) = MEMORY[0xFFFFF780000002C4];
      HIWORD(v3) = *(_WORD *)(qword_140D00A80 + 1408) + 1;
      sub_14042A5E0(L"BugCheckCode", qword_140037740);
      v2 = L"BugCheckParameter1";
    }
    else
    {
      if ( (unsigned int)HalGetEnvironmentVariableEx(L"BugCheckCode", (int)qword_140037740, (__int64)&v3, &v4, 0LL) )
      {
LABEL_8:
        dword_140D01898 = 0;
        dword_140D01890 = 1;
        return;
      }
      LODWORD(v3) = a1;
      ++HIWORD(v3);
      WORD2(v3) = MEMORY[0xFFFFF780000002C4];
      sub_14042A5E0(L"BugCheckCode", qword_140037740);
      sub_14042A5E0(L"BugCheckParameter1", qword_140037740);
      v2 = L"BugCheckProgress";
    }
    sub_14042A5E0(v2, qword_140037740);
    goto LABEL_8;
  }
}
