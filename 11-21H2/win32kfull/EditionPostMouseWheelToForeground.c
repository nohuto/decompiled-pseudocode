/*
 * XREFs of EditionPostMouseWheelToForeground @ 0x1C01DCA70
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 */

__int64 __fastcall EditionPostMouseWheelToForeground(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        struct tagINPUT_MESSAGE_SOURCE *a8,
        struct tagUIPI_INFO *a9)
{
  __int64 result; // rax
  int v14; // [rsp+70h] [rbp-28h] BYREF
  __int64 v15; // [rsp+78h] [rbp-20h] BYREF
  struct tagQ *v16; // [rsp+80h] [rbp-18h] BYREF
  __int64 v17; // [rsp+88h] [rbp-10h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v14 = 0;
  v16 = (struct tagQ *)gpqForeground;
  result = AdjustPwndPtiPqForDelegation((__int64 *)&v16, &v17, (struct tagTHREADINFO **)&v15, a1, a8, &v14);
  if ( (_DWORD)result )
    return PostInputMessage(v16, 0LL, a1, a2, a3, a4, a5, a6, a7, a8, 0LL, a9, v14, v15);
  return result;
}
