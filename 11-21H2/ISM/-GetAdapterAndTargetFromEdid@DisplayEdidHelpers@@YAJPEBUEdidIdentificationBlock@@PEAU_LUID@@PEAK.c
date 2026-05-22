/*
 * XREFs of ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x1800F92D4
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800CD148 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004B75C (--_U@YAPEAX_K@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C1ED4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x1800F9588 (-GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z.c)
 */

__int64 __fastcall DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
        DisplayEdidHelpers *this,
        LUID *a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int DisplayConfigBufferSizes; // eax
  DISPLAYCONFIG_PATH_INFO *v9; // rbx
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // r15
  unsigned int v11; // eax
  struct EdidIdentificationBlock *v12; // r9
  unsigned int v13; // edi
  __int64 v14; // rdi
  struct _LUID id; // rdx
  DisplayEdidHelpers *adapterId; // rcx
  UINT32 numModeInfoArrayElements[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v18[2]; // [rsp+48h] [rbp-18h] BYREF
  __int16 v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  UINT32 numPathArrayElements; // [rsp+A8h] [rbp+48h] BYREF

  numPathArrayElements = 0;
  numModeInfoArrayElements[0] = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             49LL,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
             (const char *)DisplayConfigBufferSizes);
  v9 = (DISPLAYCONFIG_PATH_INFO *)operator new[](saturated_mul(numPathArrayElements, 0x48uLL));
  modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)operator new[](saturated_mul(numModeInfoArrayElements[0], 0x40uLL));
  v11 = QueryDisplayConfig(2u, &numPathArrayElements, v9, numModeInfoArrayElements, modeInfoArray, 0LL);
  if ( v11 )
  {
    v13 = wil::details::in1diag3::Return_Win32(
            retaddr,
            62LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
            (const char *)v11);
  }
  else
  {
    v14 = 0LL;
    if ( numPathArrayElements )
    {
      while ( 1 )
      {
        id = (struct _LUID)v9[v14].targetInfo.id;
        adapterId = (DisplayEdidHelpers *)v9[v14].sourceInfo.adapterId;
        *(_QWORD *)v18 = 0LL;
        v19 = 0;
        if ( (int)DisplayEdidHelpers::GetRawEdidIdentificationBlock(adapterId, id, (unsigned int)v18, v12) >= 0
          && v18[0] == *(_DWORD *)this
          && v18[1] == *((_DWORD *)this + 1)
          && v19 == *((_WORD *)this + 4) )
        {
          break;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= numPathArrayElements )
          goto LABEL_13;
      }
      *a2 = v9[v14].sourceInfo.adapterId;
      a3->LowPart = v9[v14].targetInfo.id;
    }
LABEL_13:
    v13 = 0;
  }
  if ( v9 )
    operator delete[](v9);
  if ( modeInfoArray )
    operator delete[](modeInfoArray);
  return v13;
}
