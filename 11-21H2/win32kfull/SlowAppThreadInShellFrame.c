/*
 * XREFs of SlowAppThreadInShellFrame @ 0x1C0116CD4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00A99EC (IsDebuggerAttached.c)
 *     ?OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z @ 0x1C01DBEA4 (-OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z.c)
 */

struct tagTHREADINFO *__fastcall SlowAppThreadInShellFrame(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  __int64 v10; // rcx
  unsigned int v11; // edi
  struct tagTHREADINFO *v12; // rsi
  int v13; // r12d
  _DWORD *v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // [rsp+70h] [rbp+18h]
  int v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v4 = *((_QWORD *)a1 + 54);
  v6 = 0LL;
  v8 = *(_QWORD *)(v4 + 24);
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v10 = *(_QWORD *)(v4 + 112);
  if ( v10 )
  {
    v16 = *(_QWORD *)(v10 + 16);
    if ( v16 )
    {
      if ( (unsigned int)IsDebuggerAttached(*(__int64 **)(v16 + 424)) )
        return 0LL;
      a3 = v26;
      a4 = v27;
    }
  }
  if ( a4 )
  {
    v17 = *((_QWORD *)a1 + 84);
    v11 = gdwMDAQThreshold / 0xAu;
    if ( v17 && (*(_DWORD *)(v17 + 200) & 0x100000) != 0 )
      v11 = gdwMDAQThreshold / 0x14u;
  }
  else
  {
    v11 = gdwMDAQTimeoutDefenseInDepth;
  }
  v12 = *(struct tagTHREADINFO **)(v4 + 64);
  if ( v12 )
  {
    if ( v12 != a1 && v12 == a2 )
    {
      v18 = *(_QWORD *)(v4 + 72);
      if ( v18 )
      {
        if ( a3 == v18 )
        {
          if ( (unsigned int)IsDebuggerAttached(*((__int64 **)v12 + 53)) )
            return 0LL;
          if ( v8 && (int)v9 - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 48LL) >= v11 )
            return v12;
          v19 = *((_QWORD *)v12 + 101);
          if ( v19 )
          {
            if ( (int)v9 - *(_DWORD *)(v19 + 48) >= v11 )
              return v12;
          }
          if ( (int)v9 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 64) + 448LL) + 20LL) >= v11 )
            return v12;
        }
      }
    }
  }
  if ( !v8 )
    goto LABEL_6;
  v12 = *(struct tagTHREADINFO **)(v8 + 104);
  if ( !v12 )
    goto LABEL_6;
  if ( (unsigned int)IsDebuggerAttached(*((__int64 **)v12 + 53)) )
    return 0LL;
  if ( v12 != a1 || (v12 = OtherThreadsKeyboardInput((struct tagQ *)v4, (struct tagQMSG *)v8)) != 0LL )
  {
    v13 = v27;
    if ( (v27 || (*(_DWORD *)(*((_QWORD *)a1 + 56) + 8LL) & 0x1084) != 0)
      && ((int)v9 - *(_DWORD *)(v8 + 48) >= v11 || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v12 + 206)) > 0x100) )
    {
      return v12;
    }
  }
  else
  {
LABEL_6:
    v13 = v27;
  }
  v12 = *(struct tagTHREADINFO **)(v4 + 64);
  if ( !v12 || v12 == a1 )
    goto LABEL_8;
  if ( (unsigned int)IsDebuggerAttached(*((__int64 **)v12 + 53)) )
    return 0LL;
  v20 = *(_QWORD *)(v4 + 72);
  if ( v20 )
  {
    v21 = *((_QWORD *)v12 + 101);
    if ( v20 == v21 && (int)v9 - *(_DWORD *)(v21 + 48) >= v11 )
      return v12;
    v22 = *(_QWORD *)(v4 + 24);
    if ( v20 == v22 && (int)v9 - *(_DWORD *)(v22 + 48) >= v11 )
      return v12;
  }
  if ( v13
    && ((int)v9 - *(_DWORD *)(*((_QWORD *)v12 + 56) + 20LL) >= v11
     || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v12 + 206)) > 0x100) )
  {
    return v12;
  }
LABEL_8:
  v14 = (_DWORD *)*((_QWORD *)a1 + 84);
  if ( !v14 || (v14[50] & 0x100000) == 0 )
    return 0LL;
  v23 = v14[72];
  if ( v23 < 3 || v14[71] / v23 <= v11 )
  {
    v25 = v14[70];
    if ( !v25 || (int)v9 - v25 < 4 * v11 )
      return 0LL;
  }
  v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 54) + 120LL) + 112LL);
  if ( v24 )
    return *(struct tagTHREADINFO **)(v24 + 16);
  return (struct tagTHREADINFO *)v6;
}
