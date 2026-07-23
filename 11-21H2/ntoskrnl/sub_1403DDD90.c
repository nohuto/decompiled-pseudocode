/*
 * XREFs of sub_1403DDD90 @ 0x1403DDD90
 * Callers:
 *     sub_1406EFD44 @ 0x1406EFD44 (sub_1406EFD44.c)
 * Callees:
 *     sub_14024E2A0 @ 0x14024E2A0 (sub_14024E2A0.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14035F800 (RtlGetCompressionWorkSpaceSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_1403DDD90(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rcx
  __int64 Pool2; // rax
  ULONG v8; // [rsp+50h] [rbp+8h] BYREF
  ULONG v9; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 1172) = 5;
  v8 = 0;
  v9 = 0;
  *(_DWORD *)(a1 + 1176) = 3;
  *(_QWORD *)(a1 + 1120) = sub_140634F90;
  *(_QWORD *)(a1 + 1128) = a1;
  *(_QWORD *)(a1 + 1104) = 0LL;
  result = RtlGetCompressionWorkSpaceSize(3u, &v8, &v9);
  v3 = result;
  if ( result >= 0 )
  {
    if ( v8 && (v4 = ExAllocatePool2(64LL, v8, 1517777989LL), (*(_QWORD *)(a1 + 1160) = v4) == 0LL) )
    {
      return -1073741801;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
      {
        *(_QWORD *)(a1 + 1144) = 0LL;
        *(_QWORD *)(a1 + 1216) = sub_140634F40;
        *(_DWORD *)(a1 + 1192) = 275;
        v5 = 0;
        *(_QWORD *)(a1 + 1224) = a1;
        *(_QWORD *)(a1 + 1248) = 0LL;
        *(_QWORD *)(a1 + 1208) = 0LL;
        *(_QWORD *)(a1 + 1184) = 0LL;
        if ( *(_DWORD *)(a1 + 1172) )
        {
          while ( 1 )
          {
            v6 = 256LL;
            if ( *(_DWORD *)(a1 + 300) != 1 )
              v6 = 64LL;
            Pool2 = ExAllocatePool2(v6, 72LL, 1115124805LL);
            if ( !Pool2 )
              break;
            *(_DWORD *)(Pool2 + 44) = 6;
            ++v5;
            *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 1184);
            *(_QWORD *)(a1 + 1184) = Pool2 + 32;
            if ( v5 >= *(_DWORD *)(a1 + 1172) )
              goto LABEL_13;
          }
          v3 = -1073741801;
          ExFreePoolWithTag(*(PVOID *)(a1 + 1160), 0);
          sub_14024E2A0(a1);
        }
        else
        {
LABEL_13:
          _InterlockedExchange((volatile __int32 *)(a1 + 1168), 1);
        }
      }
      return v3;
    }
  }
  return result;
}
