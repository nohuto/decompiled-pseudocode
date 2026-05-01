/*
 * XREFs of sub_180008150 @ 0x180008150
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     HamPopulateActivityPropertiesByClass @ 0x1800080C0 (HamPopulateActivityPropertiesByClass.c)
 * Callees:
 *     sub_180010A58 @ 0x180010A58 (sub_180010A58.c)
 *     sub_180010B18 @ 0x180010B18 (sub_180010B18.c)
 *     memset @ 0x180016A5E (memset.c)
 */

__int64 __fastcall sub_180008150(__int64 a1, wchar_t *a2, int a3, __int64 a4)
{
  wchar_t *v6; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r11
  int v12; // r11d
  __int64 v13; // r8
  __int64 result; // rax

  v6 = a2;
  if ( !a2 )
    v6 = off_1800229A0[a3];
  memset((void *)(a4 + 4), 0, 0x184uLL);
  *(_DWORD *)a4 = 8397888;
  v9 = sub_180010B18(v8, 64LL);
  v11 = 0LL;
  if ( v9 < 0 )
  {
    *(_WORD *)(a4 + 12) = 0;
    *(_WORD *)(a4 + 140) = 0;
  }
  else
  {
    sub_180010A58(a4 + 12, 64LL, v10, a1);
    sub_180010A58(a4 + 140, (unsigned int)(v12 + 64), v13, v6);
  }
  *(_DWORD *)(a4 + 268) = 5;
  *(_DWORD *)(a4 + 276) = -1;
  result = 0LL;
  *(_OWORD *)(a4 + 280) = 0LL;
  *(_OWORD *)(a4 + 296) = 0LL;
  *(_OWORD *)(a4 + 312) = 0LL;
  *(_OWORD *)(a4 + 328) = 0LL;
  *(_OWORD *)(a4 + 344) = 0LL;
  *(_OWORD *)(a4 + 360) = 0LL;
  *(_QWORD *)(a4 + 376) = 0LL;
  *(_OWORD *)(a4 + 320) = 0LL;
  *(_OWORD *)(a4 + 336) = 0LL;
  *(_OWORD *)(a4 + 352) = 0LL;
  *(_QWORD *)(a4 + 368) = 0LL;
  *(_QWORD *)(a4 + 352) = -1LL;
  *(_QWORD *)(a4 + 344) = -1LL;
  *(_QWORD *)(a4 + 336) = -1LL;
  *(_QWORD *)(a4 + 328) = -1LL;
  *(_QWORD *)(a4 + 320) |= 0x80uLL;
  *(_DWORD *)(a4 + 368) = 33;
  switch ( a3 )
  {
    case 0:
      *(_DWORD *)(a4 + 276) = v11;
      result = *(_DWORD *)a4 & 0xFE7FBE7F | 0x1804100;
      goto LABEL_15;
    case 1:
    case 3:
      *(_DWORD *)(a4 + 276) = v11;
      *(_DWORD *)(a4 + 4) |= 0xDu;
      *(_DWORD *)(a4 + 8) |= 0x19u;
      return result;
    case 2:
      *(_DWORD *)(a4 + 4) |= 9u;
      *(_DWORD *)(a4 + 8) |= 0x11u;
      *(_DWORD *)(a4 + 268) = 3;
      *(_DWORD *)(a4 + 272) = 300;
      return result;
    case 4:
      goto LABEL_12;
    case 5:
      goto LABEL_11;
    case 6:
      *(_QWORD *)(a4 + 320) |= 0xAFuLL;
      *(_DWORD *)(a4 + 368) &= 0xFFFFFFDC;
      *(_DWORD *)(a4 + 276) = v11;
      *(_QWORD *)(a4 + 352) = v11;
      *(_QWORD *)(a4 + 344) = v11;
      *(_QWORD *)(a4 + 336) = v11;
      *(_QWORD *)(a4 + 328) = v11;
      *(_DWORD *)a4 &= ~0x400u;
      *(_DWORD *)a4 |= 0x1000u;
      return result;
    case 7:
      result = *(_DWORD *)a4 & 0xFE7EBE7F | 0x1814100;
LABEL_15:
      *(_DWORD *)a4 = result;
      return result;
    case 8:
      *(_DWORD *)a4 &= 0xFE7FDFFF;
LABEL_11:
      *(_DWORD *)a4 &= ~0x400u;
LABEL_12:
      *(_DWORD *)(a4 + 276) = v11;
      *(_QWORD *)(a4 + 320) |= 0xAFuLL;
      *(_DWORD *)(a4 + 368) &= 0xFFFFFFDC;
      *(_QWORD *)(a4 + 352) = v11;
      *(_QWORD *)(a4 + 344) = v11;
      *(_QWORD *)(a4 + 336) = v11;
      *(_QWORD *)(a4 + 328) = v11;
      break;
    default:
      return result;
  }
  return result;
}
