/*
 * XREFs of IopSetupArbiterAndTranslators @ 0x140821364
 * Callers:
 *     IopResourceRequirementsListToReqList @ 0x140820DCC (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopTranslateAndAdjustReqDesc @ 0x14081F9F4 (IopTranslateAndAdjustReqDesc.c)
 *     IopFindResourceHandlerInfo @ 0x140821748 (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x1408217D8 (IopFindLegacyBusDeviceNode.c)
 *     IopCallArbiter @ 0x140821830 (IopCallArbiter.c)
 *     IopQueryResourceHandlerInterface @ 0x140821918 (IopQueryResourceHandlerInterface.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetupArbiterAndTranslators(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // r12
  char v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // si
  unsigned int v10; // eax
  char v11; // r11
  _QWORD *LegacyBusDeviceNode; // rbx
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // r9
  __int64 result; // rax
  __int16 v18; // di
  int v19; // eax
  __int16 v20; // di
  int v21; // eax
  char v22; // dl
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  PVOID *v28; // rcx
  __int64 v29; // rdi
  __int64 Pool2; // rax
  __int64 *v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // [rsp+30h] [rbp-28h] BYREF
  __int64 v34; // [rsp+38h] [rbp-20h] BYREF
  __int64 v35; // [rsp+40h] [rbp-18h]
  char v36; // [rsp+A0h] [rbp+48h]
  char v37; // [rsp+A8h] [rbp+50h]
  __int64 v38; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+60h] BYREF

  v4 = *((_QWORD *)a1 + 9);
  v5 = 0;
  v39 = 0LL;
  v6 = 0;
  v35 = v4;
  v7 = *((_QWORD *)a1 + 4);
  v34 = 0LL;
  v37 = 1;
  v33 = 0LL;
  v8 = *(_QWORD *)(v7 + 64);
  v38 = 0LL;
  v9 = *(_BYTE *)(v8 + 1);
  v10 = a1[20];
  if ( v9 == 7 )
    v9 = 3;
  if ( v10 != 1 || (v11 = 1, *a1) )
    v11 = 0;
  v36 = v11;
  if ( !v4 || v10 == 1 )
    LegacyBusDeviceNode = IopRootDeviceNode;
  else
    LegacyBusDeviceNode = *(_QWORD **)(*(_QWORD *)(v4 + 312) + 40LL);
  if ( !LegacyBusDeviceNode )
    return 3221225610LL;
  while ( 1 )
  {
    if ( LegacyBusDeviceNode != IopRootDeviceNode || v6 || v11 )
    {
      if ( v5 )
        goto LABEL_17;
      v13 = LegacyBusDeviceNode[4];
      if ( v13 == v4 )
        goto LABEL_17;
      LOBYTE(a3) = v9;
      if ( (unsigned __int8)IopFindResourceHandlerInfo(2LL, LegacyBusDeviceNode, a3, &v39) )
        goto LABEL_13;
      if ( (unsigned __int8)v9 > 0xFu )
        v20 = 0;
      else
        v20 = 1 << v9;
      v21 = IopQueryResourceHandlerInterface(2LL, v13, a3, &v38);
      *((_WORD *)LegacyBusDeviceNode + 263) |= v20;
      if ( v21 >= 0 )
      {
        v32 = v38;
      }
      else
      {
        *((_WORD *)LegacyBusDeviceNode + 262) |= v20;
        if ( (unsigned __int8)v9 <= 0xFu )
        {
LABEL_13:
          v14 = v39;
LABEL_14:
          if ( v14 )
          {
            v5 = 1;
            if ( (*(_DWORD *)(*(_QWORD *)(v14 + 24) + 40LL) & 1) != 0 && (int)IopCallArbiter(v14, 7LL) < 0 )
            {
              v5 = 0;
            }
            else
            {
              *((_QWORD *)a1 + 36) = v14;
              *(_WORD *)(v14 + 104) = 0;
            }
          }
LABEL_17:
          if ( !v37 )
          {
LABEL_24:
            LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
            v11 = v36;
            goto LABEL_25;
          }
          LOBYTE(a3) = v9;
          if ( (unsigned __int8)IopFindResourceHandlerInfo(1LL, LegacyBusDeviceNode, a3, &v33) )
            goto LABEL_19;
          if ( (unsigned __int8)v9 > 0xFu )
            v18 = 0;
          else
            v18 = 1 << v9;
          v19 = IopQueryResourceHandlerInterface(1LL, LegacyBusDeviceNode[4], a3, &v38);
          *((_WORD *)LegacyBusDeviceNode + 261) |= v18;
          if ( v19 >= 0 )
          {
            v29 = v38;
          }
          else
          {
            *((_WORD *)LegacyBusDeviceNode + 260) |= v18;
            if ( (unsigned __int8)v9 <= 0xFu )
            {
LABEL_19:
              v15 = v33;
LABEL_20:
              if ( v15 )
                v6 = 1;
              if ( !v5 && v15 )
              {
                result = IopTranslateAndAdjustReqDesc(*((_QWORD *)a1 + 4), v15, &v34);
                if ( (int)result < 0 )
                  return result;
                a3 = v34;
                v22 = *(_BYTE *)(*(_QWORD *)(v34 + 64) + 1LL);
                *(_QWORD *)(v34 + 32) = *((_QWORD *)a1 + 4);
                v9 = v22;
                if ( v22 == 7 )
                  v9 = 3;
                v23 = v37;
                *((_QWORD *)a1 + 4) = a3;
                if ( (_DWORD)result == 288 )
                  v23 = 0;
                v37 = v23;
              }
              goto LABEL_24;
            }
            v29 = 0LL;
            v38 = 0LL;
          }
          Pool2 = ExAllocatePool2(256LL, 40LL, 538996816LL);
          if ( !Pool2 )
            return 3221225626LL;
          *(_BYTE *)(Pool2 + 16) = v9;
          *(_QWORD *)(Pool2 + 8) = Pool2;
          *(_QWORD *)Pool2 = Pool2;
          *(_QWORD *)(Pool2 + 24) = v29;
          *(_QWORD *)(Pool2 + 32) = LegacyBusDeviceNode;
          v31 = (__int64 *)LegacyBusDeviceNode[64];
          if ( (_QWORD *)*v31 != LegacyBusDeviceNode + 63 )
            goto LABEL_68;
          *(_QWORD *)(Pool2 + 8) = v31;
          *(_QWORD *)Pool2 = LegacyBusDeviceNode + 63;
          *v31 = Pool2;
          v15 = Pool2 & -(__int64)(v29 != 0);
          LegacyBusDeviceNode[64] = Pool2;
          v33 = v15;
          goto LABEL_20;
        }
        v32 = 0LL;
        v38 = 0LL;
      }
      v24 = ExAllocatePool2(256LL, 112LL, 538996816LL);
      v25 = v24;
      if ( !v24 )
        return 3221225626LL;
      *(_WORD *)(v24 + 104) = 0;
      *(_QWORD *)(v24 + 96) = v24 + 88;
      *(_QWORD *)(v24 + 88) = v24 + 88;
      *(_QWORD *)(v24 + 80) = v24 + 72;
      *(_QWORD *)(v24 + 72) = v24 + 72;
      v26 = (_QWORD *)(v24 + 40);
      *(_QWORD *)(v24 + 48) = v24 + 40;
      v27 = (_QWORD *)(v24 + 56);
      *v26 = v26;
      v27[1] = v27;
      *v27 = v27;
      *(_QWORD *)(v25 + 8) = v25;
      *(_QWORD *)v25 = v25;
      *(_BYTE *)(v25 + 16) = v9;
      *(_QWORD *)(v25 + 32) = LegacyBusDeviceNode;
      v28 = (PVOID *)LegacyBusDeviceNode[62];
      if ( *v28 != LegacyBusDeviceNode + 61 )
LABEL_68:
        __fastfail(3u);
      *(_QWORD *)v25 = LegacyBusDeviceNode + 61;
      *(_QWORD *)(v25 + 8) = v28;
      *v28 = (PVOID)v25;
      LegacyBusDeviceNode[62] = v25;
      *(_QWORD *)(v25 + 24) = v32;
      v14 = v25 & -(__int64)(v32 != 0);
      v39 = v14;
      goto LABEL_14;
    }
    v36 = 1;
    LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(*a1, a1[1]);
    if ( LegacyBusDeviceNode == v16 && !**(_DWORD **)(*((_QWORD *)a1 + 2) + 8LL) )
      LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(1LL, 0LL);
LABEL_25:
    if ( !LegacyBusDeviceNode )
      break;
    v4 = v35;
  }
  if ( !v5 )
    return 3221225610LL;
  return 0LL;
}
