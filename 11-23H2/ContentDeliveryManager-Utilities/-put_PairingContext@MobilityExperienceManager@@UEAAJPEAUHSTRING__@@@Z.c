/*
 * XREFs of ?put_PairingContext@MobilityExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800C2100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800C1A2C (-SetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W00@Z.c)
 */

__int64 __fastcall MobilityExperienceManager::put_PairingContext(MobilityExperienceManager *this, HSTRING a2)
{
  const wchar_t *StringRawBuffer; // rax
  const wchar_t *v3; // rdx
  CreativeFramework::MobilityExperienceSettings *v4; // rcx
  const wchar_t *v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v6 = CreativeFramework::MobilityExperienceSettings::SetMobilityString(v4, v3, StringRawBuffer, v5);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
