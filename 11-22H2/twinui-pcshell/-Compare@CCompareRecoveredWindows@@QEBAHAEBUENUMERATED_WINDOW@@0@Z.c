/*
 * XREFs of ?Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z @ 0x1803A6258
 * Callers:
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x1803A6060 (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 *     ??$_MergeThem@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x1803A6144 (--$_MergeThem@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompareRecoveredWindows::Compare(
        CCompareRecoveredWindows *this,
        const struct ENUMERATED_WINDOW *a2,
        const struct ENUMERATED_WINDOW *a3)
{
  int v3; // r9d
  unsigned int v4; // ebx
  CCompareRecoveredWindows *pvAttribute; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+38h] [rbp+10h] BYREF

  pvAttribute = this;
  v3 = *((_DWORD *)a2 + 2);
  v4 = -1;
  if ( v3 == *((_DWORD *)a3 + 2)
    && (v3 == 1 || v3 == 8)
    && v3 != 1
    && DwmGetWindowAttribute(*(HWND *)a2, 0xEu, &pvAttribute, 4u) >= 0
    && DwmGetWindowAttribute(*(HWND *)a3, 0xEu, &v8, 4u) >= 0
    && ((unsigned __int8)pvAttribute & 2) != 0
    && (v8 & 2) == 0 )
  {
    return 1;
  }
  return v4;
}
