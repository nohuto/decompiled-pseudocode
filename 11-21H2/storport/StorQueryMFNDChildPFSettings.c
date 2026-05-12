/*
 * XREFs of StorQueryMFNDChildPFSettings @ 0x1C009159C
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0038954 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorLogMFNDQueryChildPFSettings @ 0x1C006758C (StorLogMFNDQueryChildPFSettings.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFSettings(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  _DWORD *v5; // rbx
  size_t v7; // r15
  int v8; // esi
  __int64 Pool; // rax
  _WORD *v10; // rdi
  int v11; // ecx
  __int16 v12; // ax
  char v13; // al
  _DWORD v15[16]; // [rsp+50h] [rbp-68h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD **)(a2 + 24);
  v7 = *(unsigned int *)(v3 + 8);
  memset(v15, 0, sizeof(v15));
  *a3 = 0LL;
  if ( (*(_BYTE *)(a1 + 111) & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 5900) == 1 )
    {
      if ( *(_DWORD *)(v3 + 16) >= 0x18u )
      {
        if ( v5[2] == 16 && v5[3] >= 0x10u && (unsigned __int16)(*((_WORD *)v5 + 8) - 1) <= 0xFFFDu )
        {
          if ( v5 && v7 >= 0xA0 )
          {
            Pool = RaidAllocatePool(64LL, 264LL, 1179476306LL, *(_QWORD *)(a1 + 8));
            v10 = (_WORD *)Pool;
            if ( Pool )
            {
              v11 = *((unsigned __int16 *)v5 + 8) << 8;
              v15[0] = v15[0] & 0xFFFFFF00 | 0xD2;
              LOBYTE(v15[15]) = 2;
              v15[10] = 66;
              v15[15] = v15[15] & 0xFF0000FF | v11;
              v8 = StorSendMFNDCommand(a1, Pool, 264, (unsigned int)v15);
              if ( v8 >= 0 )
              {
                memset(v5, 0, v7);
                if ( *v10 )
                {
                  v5[2] = 9961624;
                  *v5 = 160;
                  v5[1] = 160;
                  v12 = v10[18];
                  if ( (v12 & 1) != 0 )
                  {
                    *((_WORD *)v5 + 6) |= 1u;
                    *((_WORD *)v5 + 7) = v10[19];
                    *((_WORD *)v5 + 8) = v10[20];
                    *((_WORD *)v5 + 9) = *((unsigned __int8 *)v10 + 42);
                    v5[6] = *((_DWORD *)v10 + 12);
                    v5[7] = *((_DWORD *)v10 + 14);
                    v5[8] = *((_DWORD *)v10 + 16);
                    v5[9] = *((_DWORD *)v10 + 18);
                    v12 = v10[18];
                  }
                  if ( (v12 & 2) != 0 )
                  {
                    *((_WORD *)v5 + 6) |= 2u;
                    v5[10] = 3670072;
                    v13 = *((_BYTE *)v10 + 136);
                    if ( v13 )
                    {
                      if ( v13 == 1 )
                      {
                        v5[11] = 2;
                      }
                      else if ( v13 == 2 )
                      {
                        v5[11] = 3;
                      }
                    }
                    else
                    {
                      v5[11] = 1;
                    }
                    *((_BYTE *)v5 + 48) = *((_BYTE *)v10 + 137);
                    v5[13] = *((_DWORD *)v10 + 35);
                    v5[14] = *((_DWORD *)v10 + 36);
                    v5[15] = *((_DWORD *)v10 + 37);
                    v5[16] = *((_DWORD *)v10 + 38);
                    v5[17] = *((_DWORD *)v10 + 39);
                    v5[18] = *((_DWORD *)v10 + 40);
                    v5[19] = *((_DWORD *)v10 + 41);
                    v5[20] = *((_DWORD *)v10 + 42);
                  }
                  *a3 = 160LL;
                }
              }
              ExFreePoolWithTag(v10, 0x464D6152u);
            }
            else
            {
              v8 = -1073741670;
            }
          }
          else
          {
            v8 = -1073741789;
          }
        }
        else
        {
          v8 = -1073741811;
        }
      }
      else
      {
        v8 = -1073741585;
      }
    }
    else
    {
      v8 = -1073741436;
    }
  }
  else
  {
    v8 = -1073741637;
  }
  if ( v8 < 0 )
    v5 = 0LL;
  StorLogMFNDQueryChildPFSettings(a1, (__int64)v5, 0, v8);
  return (unsigned int)v8;
}
