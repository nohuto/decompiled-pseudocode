/*
 * XREFs of ?HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003DB08
 * Callers:
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013A00 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x18004EBCC (IsPackageRundownNotificationForStoreLicense2Present.c)
 */

__int64 __fastcall HampSystemRundownStoreLicense(struct _HAM_APPLICATION *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  if ( (unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present(a1, a2) )
  {
    v4 = PackageRundownNotificationForStoreLicense2(
           (char *)a1 + 96,
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL),
           *((_QWORD *)a1 + 11) + 228LL);
    if ( v4 >= 0 )
      return 0;
    return (unsigned int)v4;
  }
  return v3;
}
