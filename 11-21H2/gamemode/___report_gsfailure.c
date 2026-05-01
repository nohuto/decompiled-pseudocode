/*
 * XREFs of ___report_gsfailure @ 0x10006D96
 * Callers:
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 * Callees:
 *     ___raise_securityfailure @ 0x10006D66 (___raise_securityfailure.c)
 */

void __cdecl __noreturn __report_gsfailure()
{
  int v0; // eax
  int v1; // edx
  int v2; // ecx
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  unsigned int v6; // kr00_4
  int vars0; // [esp+324h] [ebp+0h]
  int retaddr; // [esp+328h] [ebp+4h]
  char v9; // [esp+32Ch] [ebp+8h] BYREF

  dword_100081C8 = v0;
  dword_100081C4 = v2;
  dword_100081C0 = v1;
  dword_100081BC = v3;
  dword_100081B8 = v5;
  dword_100081B4 = v4;
  word_100081E0 = __SS__;
  word_100081D4 = __CS__;
  word_100081B0 = __DS__;
  word_100081AC = __ES__;
  word_100081A8 = __FS__;
  word_100081A4 = __GS__;
  v6 = __readeflags();
  dword_100081D8 = v6;
  dword_100081CC = vars0;
  dword_100081D0 = retaddr;
  dword_100081DC = (int)&v9;
  dword_10008118 = 65537;
  dword_100080D4 = retaddr;
  dword_100080C8 = -1073740791;
  dword_100080CC = 1;
  dword_100080D8 = 3;
  dword_100080DC[0] = 2;
  dword_100080DC[1] = __security_cookie;
  dword_100080DC[2] = __security_cookie_complement;
  __raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
