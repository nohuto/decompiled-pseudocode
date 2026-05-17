/*
 * XREFs of RtlpFindNextActivationContextSection @ 0x18001DCA0
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x18001B5A0 (RtlFindActivationContextSectionGuid.c)
 *     RtlFindActivationContextSectionString @ 0x18001D600 (RtlFindActivationContextSectionString.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x18001DE20 (RtlpLocateActivationContextSection.c)
 */

__int64 __fastcall RtlpFindNextActivationContextSection(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  struct _TEB *v4; // r13
  const char *ActivationContextData; // rdi
  __int64 ActivationContext; // rbx
  _PEB *ProcessEnvironmentBlock; // r15
  int v11; // esi
  int v12; // eax
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v14; // eax
  __int64 result; // rax
  int v16; // eax
  int v17; // [rsp+68h] [rbp+10h]

  v17 = a2;
  v4 = NtCurrentTeb();
  ActivationContextData = 0LL;
  ActivationContext = 0LL;
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  if ( a4 )
    *a4 = 0LL;
  v11 = 2;
  while ( 1 )
  {
    v12 = *(_DWORD *)(a1 + 20);
    if ( v12 )
    {
      v14 = v12 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
LABEL_13:
          if ( *(_DWORD *)(a1 + 20) > 3u )
            return 3221225701LL;
          goto LABEL_14;
        }
      }
      else
      {
LABEL_7:
        ActivationContextData = (const char *)ProcessEnvironmentBlock->ActivationContextData;
        ActivationContext = 0LL;
        if ( ActivationContextData )
        {
          *(_DWORD *)(a1 + 20) = 2;
          goto LABEL_15;
        }
      }
      ActivationContextData = (const char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
      ActivationContext = -4LL;
      if ( ActivationContextData )
      {
        *(_DWORD *)(a1 + 20) = 3;
        goto LABEL_15;
      }
      goto LABEL_13;
    }
    ActivationContextStackPointer = v4->ActivationContextStackPointer;
    if ( !ActivationContextStackPointer || !ActivationContextStackPointer->ActiveFrame )
      goto LABEL_7;
    ActivationContext = (__int64)ActivationContextStackPointer->ActiveFrame->ActivationContext;
    if ( ActivationContext )
    {
      if ( ActivationContext == -4 )
      {
        ActivationContextData = (const char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
      }
      else
      {
        if ( ActivationContext == -3 )
        {
          ActivationContextData = "Actx ";
          goto LABEL_33;
        }
        ActivationContextData = *(const char **)(ActivationContext + 24);
      }
    }
    if ( !ActivationContextData )
      goto LABEL_7;
LABEL_33:
    *(_DWORD *)(a1 + 20) = 1;
LABEL_14:
    if ( !ActivationContextData )
      return 3222601729LL;
LABEL_15:
    result = RtlpLocateActivationContextSection(
               (_DWORD)ActivationContextData,
               *(_QWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 16),
               a2,
               a3);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1072365567 || *(_DWORD *)(a1 + 20) == 3 )
      return result;
    a2 = v17;
  }
  v16 = 0;
  if ( ActivationContext != -4 )
    v11 = 0;
  LOBYTE(v16) = ActivationContext == 0;
  *(_DWORD *)(a1 + 24) = v16 | v11;
  if ( a4 )
  {
    if ( ActivationContext == -4 )
      ActivationContext = 0LL;
    *a4 = ActivationContext;
  }
  return 0LL;
}
