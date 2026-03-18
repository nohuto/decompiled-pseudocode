/*
 * XREFs of ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C011B7D0
 * Callers:
 *     FreeHidData @ 0x1C000E960 (FreeHidData.c)
 *     FreeTimer @ 0x1C003C040 (FreeTimer.c)
 *     _DestroyMenu @ 0x1C0061170 (_DestroyMenu.c)
 *     FreeHook @ 0x1C00704F0 (FreeHook.c)
 *     DestroyEventHook @ 0x1C0070D40 (DestroyEventHook.c)
 *     NtUserKillTimer @ 0x1C011B3E0 (NtUserKillTimer.c)
 *     FreeDdeXact @ 0x1C01FAFB0 (FreeDdeXact.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C011B808 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 */

IdentifyPrimaryDestroyTarget *__fastcall IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        void *a2)
{
  struct _HANDLEENTRY *v3; // rax

  *(_BYTE *)this = 0;
  v3 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(a2);
  IdentifyPrimaryDestroyTarget::Identify(this, v3);
  return this;
}
