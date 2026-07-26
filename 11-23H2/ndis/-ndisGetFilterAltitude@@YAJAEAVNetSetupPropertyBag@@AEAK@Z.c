/*
 * XREFs of ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C013C90C
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013CF44 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x1C0026ED8 (WPP_RECORDER_SF_Z.c)
 *     ??1?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ @ 0x1C005D6F0 (--1-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C011D8B0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C013B90C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 */

__int64 __fastcall ndisGetFilterAltitude(struct NetSetupPropertyBag *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  char *Atom; // r10
  unsigned int v6; // ecx
  unsigned __int64 v7; // r9
  __int64 v8; // r8
  PVOID v9; // rcx
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  P = 0LL;
  v4 = NetSetupPropertyBag::ReadString(a1, (const struct _NETSETUPPROPKEY *)&unk_1C00E4750, &P);
  if ( v4 == -1073741772 )
  {
    *a2 = 0;
LABEL_18:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(&P);
    return v3;
  }
  if ( v4 )
  {
    v3 = v4;
    goto LABEL_18;
  }
  Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_1C00F5730, *((_WORD **)P + 1));
  if ( !Atom )
  {
    v3 = -1073741670;
    goto LABEL_18;
  }
  v6 = 0;
  if ( *((_DWORD *)qword_1C00F5730 + 19) )
  {
    v7 = *((unsigned int *)qword_1C00F5730 + 19);
    while ( 1 )
    {
      v8 = v6;
      if ( v6 >= v7 )
        __fastfail(5u);
      ++v6;
      if ( *(char **)(*((_QWORD *)qword_1C00F5730 + 10) + 8 * v8) == Atom )
        break;
      if ( v6 >= (unsigned int)v7 )
        goto LABEL_12;
    }
    *a2 = v6;
    goto LABEL_18;
  }
LABEL_12:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xAu,
      0xAu,
      (struct _GUID *)&WPP_e951ce375e4a3458b598cd910eaaab3e_Traceguids,
      (unsigned __int16 *)P);
  v9 = P;
  P = 0LL;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x7274534Bu);
  return 3221225659LL;
}
