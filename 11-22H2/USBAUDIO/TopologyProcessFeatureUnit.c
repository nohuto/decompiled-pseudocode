/*
 * XREFs of TopologyProcessFeatureUnit @ 0x1C002D8C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TopologyProcessFeatureUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  NTSTATUS v9; // edi
  unsigned int *v10; // rdx
  int v11; // ebp
  __int64 v12; // r14
  int v13; // r11d
  unsigned int v14; // r13d
  int v15; // r15d
  unsigned int *v16; // r12
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  int v19; // esi
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  unsigned __int64 v25; // r8
  int v26; // eax
  unsigned int v27; // eax
  __int64 (__fastcall *v28)(); // rcx
  __int64 (__fastcall *v29)(int, int, int, int, int, int, __int64); // rdx
  __int64 v30; // r13
  unsigned __int64 v31; // rax
  __int64 Pool2; // rax
  __int64 v33; // rbp
  int v34; // r14d
  __int64 v35; // r15
  _DWORD *v36; // r8
  GUID *v37; // rax
  __int64 result; // rax
  int v39; // [rsp+20h] [rbp-78h]
  unsigned int v40; // [rsp+24h] [rbp-74h]
  __int64 v41; // [rsp+28h] [rbp-70h]
  int v42; // [rsp+30h] [rbp-68h]
  __int64 v43; // [rsp+38h] [rbp-60h]
  __int64 v44; // [rsp+40h] [rbp-58h]
  unsigned __int64 v45; // [rsp+48h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp+20h]

  v6 = a6;
  v7 = a3;
  v8 = a2;
  v9 = 0;
  v10 = a5;
  v11 = *a6;
  v12 = *(_QWORD *)(v8 + 72);
  v13 = *(_DWORD *)(v8 + 68);
  v14 = *a5;
  v15 = *(_DWORD *)(v8 + 28);
  v16 = (unsigned int *)(a4 + 16LL * *a6);
  v40 = *a5;
  v17 = **(_DWORD **)(v8 + 56);
  v41 = v12;
  v39 = v15;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v9 < 0 )
      {
LABEL_55:
        v6 = a6;
        v10 = a5;
        goto LABEL_56;
      }
      v18 = 0;
      v49 = v13 & (v13 - 1);
      v19 = v13 - v49;
      v13 = v49;
      v20 = 168LL * v14 + v7;
      *(_DWORD *)(v20 + 88) = 0;
      v21 = 0LL;
      do
      {
        if ( (v19 & *(_DWORD *)(v12 + 4 * v21)) != 0 )
        {
          ++v18;
          v22 = 2 * v15 + 1;
          v23 = v22 & (2 * v15);
          v24 = v22 - v23;
          if ( v21 )
          {
            v25 = v21;
            do
            {
              v26 = v23;
              v23 &= v23 - 1;
              v24 = v26 - v23;
              --v25;
            }
            while ( v25 );
            v8 = a2;
          }
          *(_DWORD *)(v20 + 88) |= v24;
        }
        ++v21;
      }
      while ( v21 <= *(unsigned int *)(*(_QWORD *)(v8 + 56) + 4LL) );
      ++v11;
      *(_DWORD *)(v20 + 80) = *(_DWORD *)(v8 + 16);
      *(_DWORD *)(v20 + 92) = v18;
      v16[1] = 0;
      *v16 = v17;
      v16[2] = v14;
      v16[3] = 1;
      v16 += 4;
      v42 = v11;
      if ( v19 == 1 )
        break;
      switch ( v19 )
      {
        case 2:
          v27 = 8;
          break;
        case 16:
          v27 = 9;
          break;
        case 32:
          v27 = 10;
          break;
        case 64:
          v27 = 11;
          break;
        default:
          switch ( v19 )
          {
            case 1024:
              v27 = 15;
              break;
            case 128:
              *(_QWORD *)(v20 + 136) = USBCntrlGetSetGEQ;
              v27 = 12;
              goto LABEL_34;
            case 256:
              v27 = 13;
              break;
            case 512:
              v27 = 14;
              goto LABEL_34;
            case 2048:
              v27 = 16;
              break;
            default:
              v9 = -1073741438;
              goto LABEL_54;
          }
          goto LABEL_32;
      }
      v28 = USBCntrlRestoreDbLevel;
      v29 = USBCntrlGetSetDbLevel;
LABEL_33:
      *(_QWORD *)(v20 + 136) = v29;
      *(_QWORD *)(v20 + 160) = v28;
LABEL_34:
      *(_DWORD *)(v20 + 76) = v27;
      v30 = v18;
      v44 = 4LL * v27;
      *(_QWORD *)(v20 + 8) = NodeDescriptorInfo[v44];
      *(_QWORD *)(v20 + 16) = NodeDescriptorInfo[v44 + 1];
      v43 = LODWORD(NodeDescriptorInfo[v44 + 2]);
      v31 = v18 * v43;
      v45 = v18;
      if ( v31 > 0xFFFFFFFF )
      {
        v9 = -1073741306;
        goto LABEL_51;
      }
      Pool2 = ExAllocatePool2(64LL, (unsigned int)v31, 1096972357LL);
      *(_QWORD *)(v20 + 128) = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(v20 + 96) = 0;
        v33 = 0LL;
        v34 = *(_DWORD *)(v20 + 88);
        v35 = -1LL;
        if ( v30 )
        {
          while ( v9 >= 0 )
          {
            v36 = (_DWORD *)(*(_QWORD *)(v20 + 128) + v33 * v43);
            do
              ++v35;
            while ( (v19 & *(_DWORD *)(v41 + 4 * v35)) == 0 );
            *v36 = v33;
            v36[2] = v35;
            v36[1] = (v34 - (v34 & (unsigned int)(v34 - 1))) >> 1;
            v34 &= v34 - 1;
            v37 = NodeDescriptorInfo[v44 + 3];
            if ( v37 )
              v9 = ((__int64 (__fastcall *)(__int64, __int64))v37)(a1, v20);
            if ( v9 >= 0 )
              *(_DWORD *)(v20 + 96) |= 1 << v33;
            if ( ++v33 >= v45 )
            {
              if ( v9 < 0 )
                break;
              goto LABEL_47;
            }
          }
LABEL_48:
          ExFreePool(*(PVOID *)(v20 + 128));
        }
        else
        {
LABEL_47:
          v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v20 + 128), ExFreePool);
          if ( v9 < 0 )
            goto LABEL_48;
        }
        v15 = v39;
        v12 = v41;
        v11 = v42;
        goto LABEL_50;
      }
      v9 = -1073741670;
LABEL_50:
      v8 = a2;
      v13 = v49;
LABEL_51:
      v17 = v40 | 0x80000000;
      v14 = ++v40;
LABEL_54:
      v7 = a3;
      if ( !v13 )
        goto LABEL_55;
    }
    v27 = 7;
LABEL_32:
    v28 = USBCntrlRestoreBoolean;
    v29 = USBCntrlGetSetBoolean;
    goto LABEL_33;
  }
LABEL_56:
  *v10 = v14;
  result = (unsigned int)v9;
  *v6 = v11;
  return result;
}
