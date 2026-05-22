/*
 * XREFs of ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x180115268
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800E676C (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180057628 (--_U@YAPEAX_K@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DAE94 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     wil::details::ScopeExitFn__lambda_2e16c8f32f4d4ee33d327d5a1c697d1c___::_ScopeExitFn__lambda_2e16c8f32f4d4ee33d327d5a1c697d1c___ @ 0x180115160 (wil--details--ScopeExitFn__lambda_2e16c8f32f4d4ee33d327d5a1c697d1c___--_ScopeExitFn__lambda_2e16.c)
 *     ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x180115540 (-GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z.c)
 */

__int64 __fastcall DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
        DisplayEdidHelpers *this,
        LUID *a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int DisplayConfigBufferSizes; // eax
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  unsigned int v10; // eax
  struct EdidIdentificationBlock *v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rbx
  DISPLAYCONFIG_PATH_INFO *v14; // rcx
  UINT32 numModeInfoArrayElements; // [rsp+30h] [rbp-30h] BYREF
  DISPLAYCONFIG_PATH_INFO *pathArray; // [rsp+38h] [rbp-28h] BYREF
  void *v17; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v18[4]; // [rsp+48h] [rbp-18h] BYREF
  char v19; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  UINT32 numPathArrayElements; // [rsp+98h] [rbp+38h] BYREF

  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             49LL,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
             (const char *)DisplayConfigBufferSizes);
  pathArray = (DISPLAYCONFIG_PATH_INFO *)operator new[](saturated_mul(numPathArrayElements, 0x48uLL));
  modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)operator new[](saturated_mul(numModeInfoArrayElements, 0x40uLL));
  *(_QWORD *)v18 = &pathArray;
  v17 = modeInfoArray;
  *(_QWORD *)&v18[2] = &v17;
  v19 = 1;
  v10 = QueryDisplayConfig(2u, &numPathArrayElements, pathArray, &numModeInfoArrayElements, modeInfoArray, 0LL);
  if ( v10 )
  {
    v12 = wil::details::in1diag3::Return_Win32(
            retaddr,
            62LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
            (const char *)v10);
    wil::details::ScopeExitFn__lambda_2e16c8f32f4d4ee33d327d5a1c697d1c___::_ScopeExitFn__lambda_2e16c8f32f4d4ee33d327d5a1c697d1c___((__int64)v18);
    return v12;
  }
  else
  {
    v13 = 0LL;
    if ( numPathArrayElements )
    {
      while ( 1 )
      {
        *(_QWORD *)v18 = 0LL;
        LOWORD(v18[2]) = 0;
        if ( (int)DisplayEdidHelpers::GetRawEdidIdentificationBlock(
                    *(DisplayEdidHelpers **)&pathArray[v13].sourceInfo.adapterId,
                    (struct _LUID)pathArray[v13].targetInfo.id,
                    (unsigned int)v18,
                    v11) >= 0
          && v18[0] == *(_DWORD *)this
          && v18[1] == *((_DWORD *)this + 1)
          && LOWORD(v18[2]) == *((_WORD *)this + 4) )
        {
          break;
        }
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= numPathArrayElements )
          goto LABEL_11;
      }
      v14 = pathArray;
      *a2 = pathArray[v13].sourceInfo.adapterId;
      a3->LowPart = v14[v13].targetInfo.id;
    }
    else
    {
LABEL_11:
      v14 = pathArray;
    }
    if ( v14 )
      operator delete[](v14);
    if ( v17 )
      operator delete[](v17);
    return 0LL;
  }
}
