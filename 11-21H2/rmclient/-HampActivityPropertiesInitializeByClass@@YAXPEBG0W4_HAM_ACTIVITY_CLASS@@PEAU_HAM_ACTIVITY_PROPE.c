/*
 * XREFs of ?HampActivityPropertiesInitializeByClass@@YAXPEBG0W4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800083D0
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180002160 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     HamPopulateActivityPropertiesByClass @ 0x180008360 (HamPopulateActivityPropertiesByClass.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180010FF8 (StringCopyWorkerW.c)
 *     StringValidateDestW @ 0x1800110B8 (StringValidateDestW.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

__int64 __fastcall HampActivityPropertiesInitializeByClass(const wchar_t *a1, const wchar_t *a2, int a3, __int64 a4)
{
  const wchar_t *v6; // rsi
  size_t *v8; // r8
  STRSAFE_PCNZWCH v9; // rcx
  size_t v10; // r8
  size_t *v11; // r8
  int v12; // edi
  __int64 result; // rax
  size_t v14; // [rsp+20h] [rbp-18h]
  size_t v15; // [rsp+20h] [rbp-18h]

  v6 = a2;
  if ( !a2 )
    v6 = off_180023B00[a3];
  memset_0((void *)(a4 + 4), 0, 0x184uLL);
  *(_DWORD *)a4 = 8397888;
  StringCopyWorkerW((STRSAFE_LPWSTR)(a4 + 12), 0x40uLL, v8, a1, v14);
  if ( StringValidateDestW(v9, 0x40uLL, v10) < 0 )
    *(_WORD *)(a4 + 140) = 0;
  else
    StringCopyWorkerW((STRSAFE_LPWSTR)(a4 + 140), 0x40uLL, v11, v6, v15);
  *(_DWORD *)(a4 + 268) = 5;
  *(_DWORD *)(a4 + 276) = -1;
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
  if ( !a3 )
  {
    *(_DWORD *)(a4 + 276) = 0;
    result = *(_DWORD *)a4 & 0xFE7FBE7F | 0x1804100;
    goto LABEL_17;
  }
  if ( a3 == 7 )
  {
    result = *(_DWORD *)a4 & 0xFE7EBE7F | 0x1814100;
LABEL_17:
    *(_DWORD *)a4 = result;
    return result;
  }
  v12 = a3 - 1;
  result = v12;
  switch ( v12 )
  {
    case 0:
    case 2:
      *(_DWORD *)(a4 + 276) = 0;
      *(_DWORD *)(a4 + 4) |= 0xDu;
      *(_DWORD *)(a4 + 8) |= 0x19u;
      return result;
    case 1:
      *(_DWORD *)(a4 + 4) |= 9u;
      *(_DWORD *)(a4 + 8) |= 0x11u;
      *(_DWORD *)(a4 + 268) = 3;
      *(_DWORD *)(a4 + 272) = 300;
      return result;
    case 3:
      goto LABEL_13;
    case 4:
      goto LABEL_12;
    case 5:
      *(_QWORD *)(a4 + 320) |= 0xAFuLL;
      *(_DWORD *)(a4 + 368) &= 0xFFFFFFDC;
      *(_DWORD *)(a4 + 276) = 0;
      *(_QWORD *)(a4 + 352) = 0LL;
      *(_QWORD *)(a4 + 344) = 0LL;
      *(_QWORD *)(a4 + 336) = 0LL;
      *(_QWORD *)(a4 + 328) = 0LL;
      *(_DWORD *)a4 &= ~0x400u;
      *(_DWORD *)a4 |= 0x1000u;
      return result;
    case 7:
      *(_DWORD *)a4 &= 0xFE7FDFFF;
LABEL_12:
      *(_DWORD *)a4 &= ~0x400u;
LABEL_13:
      *(_DWORD *)(a4 + 276) = 0;
      *(_QWORD *)(a4 + 320) |= 0xAFuLL;
      *(_DWORD *)(a4 + 368) &= 0xFFFFFFDC;
      *(_QWORD *)(a4 + 352) = 0LL;
      *(_QWORD *)(a4 + 344) = 0LL;
      *(_QWORD *)(a4 + 336) = 0LL;
      *(_QWORD *)(a4 + 328) = 0LL;
      break;
    default:
      return result;
  }
  return result;
}
