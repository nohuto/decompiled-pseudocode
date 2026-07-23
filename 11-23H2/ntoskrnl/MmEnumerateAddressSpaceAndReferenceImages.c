/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4EE0
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1406ADB2C (EtwpEnumerateAddressSpace.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409F2640 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402754E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140275550 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x1402756A0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1402757C0 (MiLockVadShared.c)
 *     MiVadMapsLargeImage @ 0x14027D1D0 (MiVadMapsLargeImage.c)
 *     MiReferenceControlAreaFile @ 0x1402A2664 (MiReferenceControlAreaFile.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     MiUnlockVadShared @ 0x14032A674 (MiUnlockVadShared.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiFillMapFileInfo @ 0x1408AC07A (MiFillMapFileInfo.c)
 */

_QWORD *__fastcall MmEnumerateAddressSpaceAndReferenceImages(__int64 BugCheckParameter1, char a2)
{
  int v4; // ecx
  int v5; // edx
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v7; // ebp
  _QWORD *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *i; // rdi
  _QWORD **v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // r13
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rbp
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  int v30; // r8d
  int v31; // eax
  int v32; // ecx
  unsigned __int64 v33; // rax
  __int64 VadEvent; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-78h]
  unsigned int v38; // [rsp+24h] [rbp-74h]
  _QWORD *Pool; // [rsp+28h] [rbp-70h]
  $115DCDF994C6370D29323EAB0E0C9502 v40; // [rsp+30h] [rbp-68h] BYREF

  v4 = a2 & 1;
  memset(&v40, 0, 32);
  v5 = v4 | 2;
  if ( (a2 & 2) == 0 )
    v5 = v4;
  *(_OWORD *)&v40.SavedApcStateFill[32] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = v5 | 4;
  if ( (a2 & 4) == 0 )
    v7 = v5;
  v8 = 0LL;
  v38 = v7;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v37 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v40);
    v37 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  v9 = *(_QWORD *)(BugCheckParameter1 + 2024);
  if ( v9 )
  {
    v10 = v9 + 1;
    if ( v10 <= 0x555555555555555LL )
    {
      Pool = MiAllocatePool(256, 48 * v10, 0x3031704Du);
      v8 = Pool;
      if ( Pool )
      {
        v11 = *(_QWORD **)(BugCheckParameter1 + 2008);
        i = 0LL;
        while ( v11 )
        {
          i = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !i )
            {
              *v8 = 0LL;
              v8 = Pool;
              goto LABEL_39;
            }
            v13 = (_QWORD **)i[1];
            v14 = (__int64)i;
            v15 = i;
            if ( v13 )
            {
              v16 = *v13;
              for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
                i = v16;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v15 )
                  break;
                v15 = i;
              }
            }
            MiLockVadShared((__int64)CurrentThread, v14);
            if ( (unsigned int)MiVadDeleted(v14) || v19 == 1 )
              goto LABEL_15;
            if ( (v17 & 0x200000) == 0 )
              break;
            if ( v7 >= 4 )
            {
              *v8 = (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
              v8[1] = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
                     - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
                     + 1) << 12;
              v28 = *(unsigned int *)(v14 + 52);
              LODWORD(v28) = v28 & 0x7FFFFFFF;
              if ( (v28 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) < 0x7FFFFFFFDLL )
                v29 = (v28 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
              else
                v29 = 0LL;
              v8[3] = v29;
              *((_DWORD *)v8 + 4) = *(_DWORD *)(BugCheckParameter1 + 1088);
              *((_DWORD *)v8 + 5) = 0x2000;
              v30 = v19 - 3;
              if ( v30 )
              {
                if ( v30 == 1 )
                {
                  *((_DWORD *)v8 + 5) = 8396800;
                  v32 = 8396800;
                }
                else
                {
                  v31 = *(_DWORD *)(v14 + 48);
                  v32 = 0x2000;
                  if ( (v31 & 0x200000) != 0 && ((v31 & 0x800000) != 0 || (v31 & 0x180000u) >= 0x100000) )
                  {
                    *((_DWORD *)v8 + 5) = 536879104;
                    v32 = 536879104;
                  }
                }
              }
              else if ( (*(_DWORD *)(v14 + 48) & 0x6200000) == 0x4200000 )
              {
                v32 = 0x2000;
              }
              else
              {
                *((_DWORD *)v8 + 5) = 4202496;
                v32 = 4202496;
              }
              if ( (*(_DWORD *)(v14 + 48) & 0x600000) == 0x600000 )
                *((_DWORD *)v8 + 5) = v32 | 0x200000;
              v33 = *v8 & 0xFFFFFFFFFFFFFFFCuLL | 2;
              goto LABEL_61;
            }
LABEL_15:
            MiUnlockVadShared((__int64)CurrentThread, v14);
          }
          if ( v19 != 2 || (v17 & 0xF80) != 0x380 || (v7 & 1) == 0 )
          {
            if ( (v7 & 2) != 0 )
            {
              MiFillMapFileInfo(v18, v8);
              v33 = *v8 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_61:
              *v8 = v33;
              goto LABEL_35;
            }
            goto LABEL_15;
          }
          v20 = **(_QWORD **)(v14 + 72);
          v21 = *(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32);
          v22 = v21 << 12;
          v23 = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) - v21 + 1) << 12;
          if ( (unsigned int)MiVadMapsLargeImage(v14) )
          {
            VadEvent = MiLocateVadEvent(v24, 16LL);
            v22 += (unsigned __int64)*(unsigned __int8 *)(VadEvent + 8) << 16;
            v23 = *(_QWORD *)(VadEvent + 16) << 12;
          }
          *v8 = MiReferenceControlAreaFile(v20);
          v8[1] = v22;
          v8[2] = *(_QWORD *)(*(_QWORD *)v20 + 32LL);
          v8[3] = v23;
          *((_DWORD *)v8 + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 56LL) + 60LL);
          if ( (*(_DWORD *)(v14 + 64) & 0x8000000) != 0 )
          {
            v26 = v8[1] & 0xFFFFFFFFFFFFE03FuLL;
          }
          else
          {
            v25 = v8[1] & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v20 + 15LL) & 0xF0));
            v8[1] = v25;
            v26 = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v20 + 15LL) << 9)) & 0x1C00;
          }
          v7 = v38;
          v8[1] = v26;
          if ( (v38 & 2) != 0 )
          {
            v35 = HIBYTE(*(_DWORD *)(v14 + 64)) & 1 | v8[1] & 0xFFFFFFFFFFFFFFFEuLL;
            v8[1] = v35;
            v8[1] = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v14 + 48) >> 6)) & 0x3E;
            v36 = *(unsigned int *)(v14 + 52);
            LODWORD(v36) = v36 & 0x7FFFFFFF;
            v8[4] = (v36 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
          }
LABEL_35:
          MiUnlockVadShared((__int64)CurrentThread, v14);
          v8 += 6;
        }
      }
    }
  }
LABEL_39:
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  if ( v37 )
    KiUnstackDetachProcess(&v40);
  return v8;
}
