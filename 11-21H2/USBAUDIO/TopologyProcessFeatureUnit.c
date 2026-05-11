/*
 * XREFs of TopologyProcessFeatureUnit @ 0x1C002D2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
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
  __int64 v7; // r11
  unsigned int *v8; // rdx
  NTSTATUS v9; // edi
  __int64 v10; // rbx
  int v11; // ebp
  __int64 v12; // r14
  int v13; // r10d
  unsigned int v14; // r15d
  int v15; // r13d
  unsigned int *v16; // r12
  unsigned int v17; // r9d
  unsigned int v18; // r8d
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
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  __int64 Pool2; // rax
  __int64 v33; // rbp
  int v34; // r13d
  __int64 v35; // r14
  __int64 v36; // r15
  _DWORD *v37; // r8
  GUID *v38; // rax
  __int64 result; // rax
  int v40; // [rsp+20h] [rbp-88h]
  int v41; // [rsp+24h] [rbp-84h]
  unsigned int v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+30h] [rbp-78h]
  int v44; // [rsp+38h] [rbp-70h]
  __int64 v45; // [rsp+40h] [rbp-68h]
  __int64 v46; // [rsp+48h] [rbp-60h]
  __int64 v47; // [rsp+50h] [rbp-58h]
  unsigned int v51; // [rsp+C8h] [rbp+20h]

  v6 = a6;
  v7 = a2;
  v8 = a5;
  v9 = 0;
  v10 = a3;
  v11 = *a6;
  v12 = *(_QWORD *)(v7 + 72);
  v13 = *(_DWORD *)(v7 + 68);
  v14 = *a5;
  v15 = *(_DWORD *)(v7 + 28);
  v16 = (unsigned int *)(a4 + 16LL * *a6);
  v42 = *a5;
  v17 = **(_DWORD **)(v7 + 56);
  v43 = v12;
  v41 = v15;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v9 < 0 )
      {
LABEL_56:
        v6 = a6;
        v8 = a5;
        goto LABEL_57;
      }
      v18 = 0;
      v51 = 0;
      v40 = v13 & (v13 - 1);
      v19 = v13 - v40;
      v13 = v40;
      v20 = 168LL * v14 + v10;
      v46 = v20;
      *(_DWORD *)(v20 + 88) = 0;
      v21 = 0LL;
      do
      {
        if ( (v19 & *(_DWORD *)(v12 + 4 * v21)) != 0 )
        {
          ++v18;
          v22 = 2 * v15 + 1;
          v51 = v18;
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
            v18 = v51;
          }
          *(_DWORD *)(v20 + 88) |= v24;
        }
        ++v21;
      }
      while ( v21 <= *(unsigned int *)(*(_QWORD *)(v7 + 56) + 4LL) );
      ++v11;
      *(_DWORD *)(v20 + 80) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(v20 + 92) = v18;
      v16[1] = 0;
      *v16 = v17;
      v16[2] = v14;
      v16[3] = 1;
      v16 += 4;
      v44 = v11;
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
              goto LABEL_55;
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
      v45 = 4LL * v27;
      v30 = v18;
      *(_QWORD *)(v20 + 8) = NodeDescriptorInfo[v45];
      *(_QWORD *)(v20 + 16) = NodeDescriptorInfo[v45 + 1];
      v31 = LODWORD(NodeDescriptorInfo[v45 + 2]) * (unsigned __int64)v18;
      v47 = LODWORD(NodeDescriptorInfo[v45 + 2]);
      if ( v31 > 0xFFFFFFFF )
      {
        v9 = -1073741306;
        goto LABEL_52;
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
          v36 = 0LL;
          while ( v9 >= 0 )
          {
            v37 = (_DWORD *)(v36 + *(_QWORD *)(v20 + 128));
            do
              ++v35;
            while ( (v19 & *(_DWORD *)(v43 + 4 * v35)) == 0 );
            v20 = v46;
            *v37 = v33;
            v37[2] = v35;
            v37[1] = (v34 - (v34 & (unsigned int)(v34 - 1))) >> 1;
            v34 &= v34 - 1;
            v38 = NodeDescriptorInfo[v45 + 3];
            if ( !v38 || (v9 = ((__int64 (__fastcall *)(__int64, __int64))v38)(a1, v46), v9 >= 0) )
              *(_DWORD *)(v46 + 96) |= 1 << v33;
            v36 += v47;
            if ( ++v33 >= (unsigned __int64)v51 )
            {
              if ( v9 < 0 )
                goto LABEL_48;
              goto LABEL_47;
            }
          }
LABEL_49:
          ExFreePool(*(PVOID *)(v20 + 128));
        }
        else
        {
LABEL_47:
          v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v20 + 128), ExFreePool);
LABEL_48:
          if ( v9 < 0 )
            goto LABEL_49;
        }
        v15 = v41;
        v12 = v43;
        v11 = v44;
        goto LABEL_51;
      }
      v9 = -1073741670;
LABEL_51:
      v13 = v40;
      v7 = a2;
LABEL_52:
      v17 = v42 | 0x80000000;
      v14 = ++v42;
LABEL_55:
      v10 = a3;
      if ( !v13 )
        goto LABEL_56;
    }
    v27 = 7;
LABEL_32:
    v28 = USBCntrlRestoreBoolean;
    v29 = USBCntrlGetSetBoolean;
    goto LABEL_33;
  }
LABEL_57:
  *v8 = v14;
  result = (unsigned int)v9;
  *v6 = v11;
  return result;
}
