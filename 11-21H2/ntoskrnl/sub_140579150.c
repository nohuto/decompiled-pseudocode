/*
 * XREFs of sub_140579150 @ 0x140579150
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_140567F5C @ 0x140567F5C (sub_140567F5C.c)
 *     sub_140579004 @ 0x140579004 (sub_140579004.c)
 *     sub_14057958C @ 0x14057958C (sub_14057958C.c)
 *     sub_1405796F8 @ 0x1405796F8 (sub_1405796F8.c)
 *     sub_140579750 @ 0x140579750 (sub_140579750.c)
 *     sub_1406396B8 @ 0x1406396B8 (sub_1406396B8.c)
 */

__int64 sub_140579150()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (int)sub_140579750(199LL) >= 0 )
  {
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(dword_140D0E5E0[0] >> 6);
    Affinity.Mask = 1LL << (dword_140D0E5E0[0] & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( !HIDWORD(KeGetPcr()[1].LockArray) )
    {
      dword_140C2A94C = HIDWORD(KeGetPcr()[1].LockArray);
      byte_140C2A950 = 1;
      sub_140567F5C(0x400u);
      LOBYTE(v0) = byte_140C2AA04;
      if ( (int)sub_1405796F8(v0) >= 0 )
      {
        if ( !byte_140C2AA04 )
        {
          sub_14057958C(3LL);
          goto LABEL_9;
        }
        sub_140579004(v1);
        if ( !byte_140C2A960 && (int)sub_140579750(4LL) >= 0 )
        {
          sub_1406396B8();
LABEL_9:
          byte_140C2A950 = 0;
          goto LABEL_11;
        }
      }
    }
  }
  sub_14057958C(5LL);
LABEL_11:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140C2AA17 & 2) != 0 )
  {
    KeSetEvent(&stru_140C2A9E0, 0, 0);
  }
  else if ( (byte_140C2AA17 & 4) != 0 )
  {
    sub_140579750(198LL);
    sub_14042A5E0(0LL, v2);
    HalReturnToFirmware(3);
  }
  return sub_140579750(197LL);
}
