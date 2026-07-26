/*
 * XREFs of ndisBlowStringListIntoAtoms @ 0x1C013C474
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013CF44 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C013D130 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013D2C0 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00B32D8 (--_G-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z.c)
 *     ??1?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA@XZ @ 0x1C00B3540 (--1-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B377C (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C013A180 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C013B90C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 */

__int64 __fastcall ndisBlowStringListIntoAtoms(void ***a1, const struct _NETSETUPPROPKEY *a2, __int64 a3)
{
  unsigned int StringArray; // ebx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  char *Atom; // rax
  void **v10; // rcx
  int v12; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-Ch]
  PVOID P; // [rsp+28h] [rbp-8h]

  v12 = 0;
  v13 = 0;
  P = 0LL;
  StringArray = NetSetupPropertyBag::ReadStringArray(a1, a2, (__int64)&v12);
  if ( StringArray )
    goto LABEL_18;
  v5 = v13;
  if ( !Rtl::KArray<Rtl::_KStringAtom *,1>::reserve((unsigned int *)a3, v13) )
  {
LABEL_17:
    StringArray = -1073741670;
LABEL_18:
    Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::~KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>((__int64)&v12);
    return StringArray;
  }
  v6 = *(unsigned int *)(a3 + 4);
  if ( v5 > v6 )
    memset((void *)(*(_QWORD *)(a3 + 8) + 8 * v6), 0, 8 * ((unsigned int)v5 - v6));
  *(_DWORD *)(a3 + 4) = v5;
  v7 = 0LL;
  v8 = v13;
  if ( v13 )
  {
    do
    {
      if ( v7 >= v8
        || (Atom = Rtl::KStringAtomTableBase<1>::GetAtom(
                     (__int64)qword_1C00F5730,
                     *(_WORD **)(*((_QWORD *)P + v7) + 8LL)),
            v7 >= *(unsigned int *)(a3 + 4))
        || (*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v7) = Atom, v7 >= *(unsigned int *)(a3 + 4)) )
      {
        __fastfail(5u);
      }
      if ( !*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v7) )
        goto LABEL_17;
      v8 = v13;
    }
    while ( ++v7 < v13 );
  }
  v10 = (void **)P;
  if ( P )
  {
    while ( v8 )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(&v10[--v8]);
      v10 = (void **)P;
    }
    ExFreePoolWithTag(v10, 0x7272414Bu);
  }
  return 0LL;
}
