/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140B9C3E8
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     BcpGetProgressMessages @ 0x140384E10 (BcpGetProgressMessages.c)
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14038780C (BgpFwAllocateMemory.c)
 *     BcpGetMaxResourceProfile @ 0x140394CF0 (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterGetContext @ 0x140AEE4B8 (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AEF564 (BgpDisplayCharacterDestroyContext.c)
 *     BcpFindMessage @ 0x140B9C35C (BcpFindMessage.c)
 *     BgpFoDetermineFontInformation @ 0x140B9C9D8 (BgpFoDetermineFontInformation.c)
 */

__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  int v3; // eax
  PCWSTR v4; // rbx
  const wchar_t *Message; // rax
  const wchar_t *v6; // rax
  const wchar_t *v7; // rax
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  int ProgressMessages; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // eax
  _DWORD *v23; // rdi
  __int64 v24; // r14
  _DWORD *v25; // rsi
  __int64 v26; // rdi
  __int64 Memory; // rax
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-38h] BYREF
  int v31; // [rsp+40h] [rbp-30h]
  __int128 v32; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v33[2]; // [rsp+58h] [rbp-18h] BYREF
  __int128 v34; // [rsp+60h] [rbp-10h] BYREF
  PCWSTR v35; // [rsp+A0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+40h] BYREF
  PCWSTR v37; // [rsp+B8h] [rbp+48h] BYREF

  v29 = 0LL;
  v35 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v3 = *(_DWORD *)(a1 + 120);
  v32 = 0LL;
  v34 = 0LL;
  if ( (v3 & 0x400000) != 0 )
  {
    dword_140C0E4B0 |= 0x400000u;
  }
  else
  {
    if ( (v3 & 0x2000000) != 0 )
      BcpDisplayParameters = 1;
    v4 = 0LL;
    SourceString = 0LL;
    v37 = 0LL;
    if ( a2 != -1 )
    {
      Message = BcpFindMessage(0xC1008001);
      RtlInitUnicodeString(&stru_140C70A80, Message);
      v6 = BcpFindMessage(0xC1008008);
      RtlInitUnicodeString(&stru_140C70AA0, v6);
      v7 = BcpFindMessage(0x41008009u);
      RtlInitUnicodeString(&stru_140C70AB0, v7);
      v8 = BcpFindMessage(0x41008010u);
      RtlInitUnicodeString(&stru_140C70AC0, v8);
      v9 = BcpFindMessage(0x41008011u);
      RtlInitUnicodeString(&stru_140C70AD0, v9);
      v10 = BcpFindMessage(0xC1008003);
      RtlInitUnicodeString(&stru_140C70A90, v10);
      v11 = BcpFindMessage(0x41008014u);
      RtlInitUnicodeString(&stru_140C70B20, v11);
      v12 = BcpFindMessage(0x41008015u);
      RtlInitUnicodeString(&stru_140C70B30, v12);
      v13 = BcpFindMessage(0x41008016u);
      RtlInitUnicodeString(&stru_140C70B40, v13);
      v14 = BcpFindMessage(0x41008018u);
      RtlInitUnicodeString(&stru_140C70B50, v14);
      v15 = BcpFindMessage(0x41008017u);
      RtlInitUnicodeString(&stru_140C70B60, v15);
      v16 = BcpFindMessage(0x41008019u);
      RtlInitUnicodeString(&stru_140C70B70, v16);
      v17 = BcpFindMessage(0x41008020u);
      RtlInitUnicodeString(&stru_140C70B80, v17);
      v18 = BcpFindMessage(0x41008021u);
      RtlInitUnicodeString(&stru_140C70B90, v18);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v35) >= 0 )
      {
        RtlInitUnicodeString(&stru_140C70AE0, SourceString);
        RtlInitUnicodeString(&stru_140C70AF0, v35);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v37, &v35);
        v4 = v37;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_140C70B00, v37);
          RtlInitUnicodeString(&stru_140C70B10, v35);
          if ( *BcpFindMessage(0x41008006u) == 48 )
            dword_140C0E4B0 |= 0x20000u;
          v22 = *(_DWORD *)(a1 + 120) & 0x10000000;
          v33[1] = -1;
          v23 = dword_140C0B5A0;
          v33[0] = v22 != 0 ? -14389468 : -16761454;
LABEL_10:
          v24 = 0LL;
          v25 = v23;
          while ( (int)BgpFoDetermineFontInformation(
                         *v25,
                         v20,
                         v21,
                         (unsigned int)&v29,
                         (__int64)&v34 + 8,
                         (__int64)&v34) >= 0 )
          {
            ++v24;
            *v25++ = DWORD2(v34);
            if ( v24 >= 4 )
            {
              v23 += 18;
              if ( (__int64)v23 < (__int64)&qword_140C0B708 )
                goto LABEL_10;
              HIDWORD(v34) = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v33, &v32) >= 0 )
              {
                v26 = v32;
                Memory = BgpFwAllocateMemory(v32);
                if ( Memory )
                {
                  qword_140C0E3F0 = 0LL;
                  BcpWorkspace = Memory;
                  v30 = __PAIR64__(HIDWORD(v29), DWORD2(v32));
                  qword_140C0E3E8 = v26;
                  qword_140C70BA0 = BgpDisplayCharacterGetContext((__int64)v33, (int *)&v30, 3);
                  if ( qword_140C70BA0 )
                  {
                    dword_140C0E4B0 |= 0x10u;
                    return 0LL;
                  }
                }
              }
              break;
            }
          }
        }
      }
      if ( SourceString )
        BgpFwFreeMemory((__int64)SourceString);
      if ( v4 )
        BgpFwFreeMemory((__int64)v4);
      if ( qword_140C70BA0 )
        BgpDisplayCharacterDestroyContext(qword_140C70BA0);
    }
  }
  return 0LL;
}
