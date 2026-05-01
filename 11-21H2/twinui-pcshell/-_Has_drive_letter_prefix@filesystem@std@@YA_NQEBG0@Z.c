/*
 * XREFs of ?_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z @ 0x180576D10
 * Callers:
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180576C2C (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180584CCC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::filesystem::_Has_drive_letter_prefix(
        std::filesystem *this,
        char *a2,
        const unsigned __int16 *const a3)
{
  return (__int64)((a2 - (char *)this) & 0xFFFFFFFFFFFFFFFEuLL) >= 4 && (*(_DWORD *)this & 0xFFFFFFDF) - 3801153 < 0x1A;
}
