/*
 * XREFs of HviGetHardwareFeatures @ 0x140647B00
 * Callers:
 *     sub_1403BE570 @ 0x1403BE570 (sub_1403BE570.c)
 *     sub_140548D80 @ 0x140548D80 (sub_140548D80.c)
 *     sub_14054C1A4 @ 0x14054C1A4 (sub_14054C1A4.c)
 *     sub_1405F2D28 @ 0x1405F2D28 (sub_1405F2D28.c)
 *     sub_140930DA8 @ 0x140930DA8 (sub_140930DA8.c)
 *     sub_140930EC4 @ 0x140930EC4 (sub_140930EC4.c)
 *     sub_140A543D8 @ 0x140A543D8 (sub_140A543D8.c)
 *     sub_140AF819C @ 0x140AF819C (sub_140AF819C.c)
 *     sub_140AF9238 @ 0x140AF9238 (sub_140AF9238.c)
 *     sub_140AFAD4C @ 0x140AFAD4C (sub_140AFAD4C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140647B74 @ 0x140647B74 (sub_140647B74.c)
 */

__int64 __fastcall HviGetHardwareFeatures(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v10 = 0LL;
  sub_140647B74(&v10, a2, a3, a4);
  _RAX = 1073741830LL;
  if ( (unsigned int)v10 < 0x40000006 )
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    __asm { cpuid }
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = _RBX;
    *(_DWORD *)(a1 + 8) = _RCX;
    *(_DWORD *)(a1 + 12) = _RDX;
  }
  return result;
}
