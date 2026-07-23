/*
 * XREFs of HaliRemoveInterruptRemapping @ 0x1409335D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptUnmap @ 0x1409335F8 (HalpInterruptUnmap.c)
 */

__int64 __fastcall HaliRemoveInterruptRemapping(int a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  return HalpInterruptUnmap(a1, a2, a3, a4, a5, a6);
}
