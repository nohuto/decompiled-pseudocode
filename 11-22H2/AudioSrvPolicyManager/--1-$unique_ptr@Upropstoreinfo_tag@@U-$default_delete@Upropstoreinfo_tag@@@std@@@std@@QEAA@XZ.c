/*
 * XREFs of ??1?$unique_ptr@Upropstoreinfo_tag@@U?$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ @ 0x18003CF44
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x18003E79C (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?SetValue@CAudioSessionPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x18003FE20 (-SetValue@CAudioSessionPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
