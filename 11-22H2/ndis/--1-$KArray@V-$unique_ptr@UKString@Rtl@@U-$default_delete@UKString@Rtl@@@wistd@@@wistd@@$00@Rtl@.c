/*
 * XREFs of ??1?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA@XZ @ 0x1C00B3520
 * Callers:
 *     ndisBlowStringListIntoAtoms @ 0x1C013C494 (ndisBlowStringListIntoAtoms.c)
 * Callees:
 *     ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00B32B8 (--_G-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z.c)
 */

void __fastcall Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::~KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>(
        __int64 a1)
{
  unsigned int i; // edi

  if ( *(_QWORD *)(a1 + 8) )
  {
    for ( i = *(_DWORD *)(a1 + 4);
          i;
          wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'((void **)(*(_QWORD *)(a1 + 8) + 8LL * i)) )
    {
      --i;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0x7272414Bu);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
  }
}
