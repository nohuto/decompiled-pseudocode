/*
 * XREFs of UpdateAsyncKeyState @ 0x1C0089620
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01ECDE4 (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C00897C0 (PostUpdateKeyStateEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall UpdateAsyncKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(void)
{
  unsigned __int64 v4; // rbp
  int v6; // r14d
  unsigned __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ecx
  __int64 (*result)(void); // rax
  __int64 v27; // rdx
  char v28; // [rsp+60h] [rbp+18h]

  v28 = a3;
  v4 = (unsigned __int8)a2;
  if ( a1 && (*(_DWORD *)(a1 + 396) & 1) != 0 )
  {
    PostUpdateKeyStateEvent();
    LOBYTE(a3) = v28;
  }
  v6 = v4 & 3;
  v7 = v4 >> 2;
  v8 = 2 * v6;
  if ( (_BYTE)a3 )
  {
    v24 = SGDGetUserSessionState(a1, a2, a3, a4);
    v25 = *(unsigned __int8 *)(v24 + v7 + 13992) & ~(1 << v8);
  }
  else
  {
    v9 = SGDGetUserSessionState(a1, a2, a3, a4);
    v10 = *(unsigned __int8 *)(v9 + (v4 >> 3) + 14120) | (unsigned int)(1 << (v4 & 7));
    *(_BYTE *)(v9 + (v4 >> 3) + 14120) |= 1 << (v4 & 7);
    v14 = SGDGetUserSessionState(v10, v11, v12, v13);
    v17 = v8;
    LOBYTE(v18) = *(_BYTE *)(v14 + v7 + 13992);
    if ( ((unsigned __int8)v18 & (unsigned __int8)(1 << v8)) == 0 )
    {
      v22 = 2 * v6 + 1;
      if ( ((unsigned __int8)(1 << v22) & *(_BYTE *)(SGDGetUserSessionState(v8, v18, v15, v16) + v7 + 13992)) != 0 )
      {
        v23 = SGDGetUserSessionState(v22, v19, v20, v21);
        v17 = *(unsigned __int8 *)(v23 + v7 + 13992);
        LODWORD(v17) = v17 & ~(1 << v22);
      }
      else
      {
        v23 = SGDGetUserSessionState(v22, v19, v20, v21);
        v17 = *(unsigned __int8 *)(v23 + v7 + 13992);
        LODWORD(v17) = v17 | (1 << v22);
      }
      *(_BYTE *)(v23 + v7 + 13992) = v17;
    }
    v24 = SGDGetUserSessionState(v17, v18, v15, v16);
    v25 = *(unsigned __int8 *)(v24 + v7 + 13992) | (1 << v8);
  }
  *(_BYTE *)(v24 + v7 + 13992) = v25;
  result = qword_1C02967E0;
  if ( qword_1C02967E0 )
  {
    result = (__int64 (*)(void))qword_1C02967E0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02967E8;
      if ( qword_1C02967E8 )
      {
        LOBYTE(v27) = v4;
        return (__int64 (*)(void))qword_1C02967E8(a1, v27);
      }
    }
  }
  return result;
}
