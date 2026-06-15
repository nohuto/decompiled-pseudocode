/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1800052D0
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, int *a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  _DWORD *v10; // rax
  int v11; // eax
  bool v12; // zf
  int v13; // edx

  v5 = 0;
  result = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL);
  if ( (_DWORD)result == -1073741275 )
  {
    *a5 = 0LL;
    *a4 = 0;
    *a3 = 0;
  }
  else
  {
    *a3 = 0;
    v5 = result;
    if ( (int)result < 0 )
      return result;
  }
  if ( (*a5 & 1) != 0 )
  {
    if ( (*a5 & 8) != 0 )
    {
      v10 = &unk_180054404;
    }
    else
    {
      v11 = *a4;
      if ( (*a4 & 0x10000) != 0 )
      {
        v10 = &unk_180054400;
      }
      else if ( (v11 & 0x4000) != 0 )
      {
        v10 = &unk_180054408;
      }
      else if ( (v11 & 4) != 0 )
      {
        v10 = &unk_1800543E4;
      }
      else if ( (v11 & 0x40400) != 0 )
      {
        v10 = &unk_1800543F4;
      }
      else if ( (v11 & 0x800) != 0 )
      {
        v10 = &unk_1800543F8;
      }
      else if ( (v11 & 0x40) != 0 )
      {
        v10 = &unk_1800543F0;
      }
      else if ( (v11 & 0x1000) != 0 )
      {
        v10 = &unk_1800543FC;
      }
      else
      {
        v12 = (v11 & 8) == 0;
        v10 = &unk_1800543EC;
        if ( v12 )
          v10 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
      }
    }
  }
  else
  {
    v10 = &unk_1800543E8;
  }
  v13 = v10[11 * (a2 - 1)];
  result = v5;
  *a3 = v13;
  return result;
}
