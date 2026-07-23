/*
 * XREFs of PssNtWalkSnapshot @ 0x180129560
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x1801293D0 (PssNtValidateDescriptor.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x18012B8EC (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x18012BA18 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x18012BB94 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x18012BD1C (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 */

__int64 __fastcall PssNtWalkSnapshot(unsigned int *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  int v10; // ebx
  int v11; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            return 3221225475LL;
          if ( !a4 || a5 == 136 )
            return PsspWalkInfoClass_PSS_WALK_THREADS(a1, a3, a4);
        }
        else if ( !a4 || a5 == 72 )
        {
          return PsspWalkInfoClass_PSS_WALK_HANDLES(a1, a3, a4);
        }
      }
      else if ( !a4 || a5 == 80 )
      {
        return PsspWalkInfoClass_PSS_WALK_VA_SPACE(a1, a3, a4);
      }
      return 3221225476LL;
    }
    if ( a4 && a5 != 80 )
      return 3221225476LL;
    return PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES(a1, a3, a4);
  }
  return result;
}
