/*
 * XREFs of ?Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C01404A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1C00B7D64 (WPP_RECORDER_SF__guid_Dd.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E124 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall NetSetupKnobCollection::Open(NetSetupKnobCollection *this, ACCESS_MASK a2, KRegKey *a3)
{
  __int64 v5; // rdi
  int v6; // edx
  int v7; // ebx
  wchar_t v9[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( a2 != 1 )
    NT_ASSERT("accessMask == (0x0001)");
  v5 = *((_QWORD *)this + 3) + 12LL;
  netsetupBuildObjectPath(2u, v5, 0, 1, v9);
  v7 = KRegKey::Open(a3 + 1, 1u, v9, 0LL);
  if ( v7 == -1073741772 )
  {
    netsetupBuildObjectPath(2u, v5, 1u, 1, v9);
    v7 = KRegKey::Open(a3 + 1, a2, v9, 0LL);
  }
  if ( v7 >= 0 )
  {
    LOBYTE(a3[2].m_ptr) = 1;
    return 0LL;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        1u,
        0xAu,
        (struct _GUID *)&WPP_793cc56eb21738532989aa31410832fc_Traceguids,
        v5,
        1,
        v7);
    return (unsigned int)v7;
  }
}
