/*
 * XREFs of WbHeapExecuteCall @ 0x1407E3070
 * Callers:
 *     WbDispatchOperation @ 0x1407E2B70 (WbDispatchOperation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WbGetHeapExecutedBlock @ 0x1407E3260 (WbGetHeapExecutedBlock.c)
 *     WbValidateHeapExecuteCallArguments @ 0x1407E3510 (WbValidateHeapExecuteCallArguments.c)
 *     WbGetTrapFrame @ 0x1407E3868 (WbGetTrapFrame.c)
 *     WbGetWarbirdThread @ 0x1407E3900 (WbGetWarbirdThread.c)
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 *     sub_1407E3BE4 @ 0x1407E3BE4 (sub_1407E3BE4.c)
 *     WbSetTrapFrame @ 0x1407E3C20 (WbSetTrapFrame.c)
 *     sub_1407E3D20 @ 0x1407E3D20 (sub_1407E3D20.c)
 *     sub_1407E3E2C @ 0x1407E3E2C (sub_1407E3E2C.c)
 */

__int64 __fastcall WbHeapExecuteCall(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int HeapExecutedBlock; // ebx
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // r14
  _KPROCESS *Process; // rcx
  _KPROCESS *v13; // rcx
  __int16 v15; // ax
  _KPROCESS *v16; // rcx
  __int16 v17; // ax
  __int16 v18; // ax
  _KPROCESS *v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  _BYTE v24[336]; // [rsp+60h] [rbp-A0h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  memset(v24, 0, sizeof(v24));
  HeapExecutedBlock = WbValidateHeapExecuteCallArguments(a2, a4, v24);
  if ( HeapExecutedBlock >= 0 )
  {
    HeapExecutedBlock = WbGetHeapExecutedBlock(a1, v24, &v21);
    if ( HeapExecutedBlock >= 0 )
    {
      HeapExecutedBlock = WbGetWarbirdThread(a1, v9, &v20);
      if ( HeapExecutedBlock >= 0 )
      {
        v10 = v20;
        HeapExecutedBlock = WbGetTrapFrame(v20, &v22);
        if ( HeapExecutedBlock >= 0 )
        {
          v11 = v21;
          HeapExecutedBlock = sub_1407E3E2C(v10, v21, DWORD2(v22), v22, v23);
          if ( HeapExecutedBlock >= 0 )
          {
            HeapExecutedBlock = sub_1407E3D20(v24, v11, &v22, a2, a3, a4);
            if ( HeapExecutedBlock >= 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( !Process[1].Affinity.StaticBitmap[30] )
                goto LABEL_8;
              v15 = WORD2(Process[2].Affinity.StaticBitmap[20]);
              if ( v15 != 332 && v15 != 452 )
                goto LABEL_8;
              v16 = KeGetCurrentThread()->ApcState.Process;
              if ( !v16[1].Affinity.StaticBitmap[30] )
                goto LABEL_18;
              v17 = WORD2(v16[2].Affinity.StaticBitmap[20]);
              if ( !v17 )
                goto LABEL_18;
              if ( v17 != 332 )
              {
                if ( v17 != 452 )
                {
LABEL_18:
                  HeapExecutedBlock = -1073741637;
                  goto LABEL_11;
                }
              }
              else
              {
LABEL_8:
                LODWORD(v23) = v23 & 0xFFFFFEFF;
              }
              *((_QWORD *)&v22 + 1) = *(_QWORD *)(v21 + 24);
              HeapExecutedBlock = WbSetTrapFrame(v20, &v22);
              if ( HeapExecutedBlock >= 0 )
              {
                v13 = KeGetCurrentThread()->ApcState.Process;
                if ( v13[1].Affinity.StaticBitmap[30] )
                {
                  v18 = WORD2(v13[2].Affinity.StaticBitmap[20]);
                  if ( v18 == 332 || v18 == 452 )
                  {
                    v19 = KeGetCurrentThread()->ApcState.Process;
                    if ( v19[1].Affinity.StaticBitmap[30] && WORD2(v19[2].Affinity.StaticBitmap[20]) == 332 )
                      HeapExecutedBlock = DWORD2(v22);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  sub_1407E3BE4(a1, v20);
  sub_1407E3B7C(a1, v21);
  return (unsigned int)HeapExecutedBlock;
}
