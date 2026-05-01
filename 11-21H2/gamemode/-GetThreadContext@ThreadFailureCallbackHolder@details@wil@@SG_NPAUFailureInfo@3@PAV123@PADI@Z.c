/*
 * XREFs of ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SG_NPAUFailureInfo@3@PAV123@PADI@Z @ 0x10003A8F
 * Callers:
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SG_NPAUFailureInfo@3@PAV123@PADI@Z @ 0x10003A8F (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SG_NPAUFailureInfo@3@PAV123@PADI@Z.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SGXPAUFailureInfo@3@PADI@Z @ 0x10003B4D (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SGXPAUFailureInfo@3@PADI@Z.c)
 * Callees:
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SG_NPAUFailureInfo@3@PAV123@PADI@Z @ 0x10003A8F (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SG_NPAUFailureInfo@3@PAV123@PADI@Z.c)
 */

bool __userpurge wil::details::ThreadFailureCallbackHolder::GetThreadContext@<al>(
        int a1@<edx>,
        int a2@<ecx>,
        struct wil::FailureInfo *a3,
        struct wil::details::ThreadFailureCallbackHolder *a4,
        char *a5,
        unsigned int a6)
{
  bool result; // al
  int v8; // edi
  int v9; // edx
  _DWORD *v10; // edi
  _DWORD *v11; // edi
  struct wil::details::ThreadFailureCallbackHolder *v12; // ecx
  struct wil::details::ThreadFailureCallbackHolder *v13; // ebx
  char *v14; // esi
  char *v15; // edi
  char *v16; // [esp+0h] [ebp-10h]
  unsigned int v17; // [esp+4h] [ebp-Ch]

  result = 0;
  v8 = a2;
  *(_BYTE *)a3 = 0;
  if ( a1 )
  {
    result = wil::details::ThreadFailureCallbackHolder::GetThreadContext(a3, a4, v16, v17);
    v9 = *(_DWORD *)(a1 + 16);
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(&wil::details::ThreadFailureCallbackHolder::s_telemetryId);
      if ( !*(_DWORD *)(v8 + 52) )
      {
        v10 = (_DWORD *)(v8 + 52);
        *v10++ = *(_DWORD *)v9;
        *v10 = *(_DWORD *)(v9 + 4);
        v10[1] = *(_DWORD *)(v9 + 8);
        v8 = a2;
      }
      v11 = (_DWORD *)(v8 + 64);
      *v11++ = *(_DWORD *)v9;
      *v11 = *(_DWORD *)(v9 + 4);
      v11[1] = *(_DWORD *)(v9 + 8);
      v12 = (struct wil::FailureInfo *)((char *)a3 + strlen((const char *)a3) + 1);
      if ( (int)a4 + (int)a3 - ((int)v12 - 1) > 2 )
      {
        *((_BYTE *)v12 - 1) = 92;
        v13 = v12;
        v14 = (char *)((struct wil::details::ThreadFailureCallbackHolder *)((char *)a4 + (_DWORD)a3) - v12);
        v15 = (char *)(strlen(*(const char **)(v9 + 4)) + 1);
        if ( v15 >= v14 )
          v15 = (char *)((struct wil::details::ThreadFailureCallbackHolder *)((char *)a4 + (_DWORD)a3) - v13);
        _memcpy_s(v13, (const rsize_t)v14, *(const void *const *)(v9 + 4), (const rsize_t)v15);
        *((_BYTE *)v13 + (_DWORD)v15 - 1) = 0;
      }
      return 1;
    }
  }
  return result;
}
