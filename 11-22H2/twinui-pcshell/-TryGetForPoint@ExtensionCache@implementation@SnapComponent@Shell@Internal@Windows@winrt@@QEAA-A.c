/*
 * XREFs of ?TryGetForPoint@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBUPoint@Foundation@67@@Z @ 0x1806856F4
 * Callers:
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180685830 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1806861FC (-get@-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QE.c)
 */

float **__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::TryGetForPoint(
        RTL_SRWLOCK *a1,
        float **a2,
        float *a3)
{
  char *Ptr; // rdi
  char *v7; // rbp
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float *v12; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockShared(a1);
  Ptr = (char *)a1[1].Ptr;
  v7 = (char *)a1[2].Ptr;
  while ( 1 )
  {
    if ( Ptr == v7 )
    {
      *a2 = 0LL;
      goto LABEL_11;
    }
    winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager>::get(Ptr, &v12);
    if ( v12 )
      break;
LABEL_8:
    Ptr += 8;
  }
  v8 = v12[8];
  if ( *a3 < v8 || (float)(v8 + v12[10]) < *a3 || (v9 = v12[9], v10 = a3[1], v10 < v9) || (float)(v9 + v12[11]) < v10 )
  {
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    goto LABEL_8;
  }
  *a2 = v12;
LABEL_11:
  if ( a1 )
    ReleaseSRWLockShared(a1);
  return a2;
}
