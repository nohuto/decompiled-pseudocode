/*
 * XREFs of ?OnGetAllDependentProperties@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXIPEAIPEAPEAI@Z @ 0x1800B6DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTracker::OnGetAllDependentProperties(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        int a2,
        unsigned int *a3,
        unsigned int **a4)
{
  int v4; // edx
  unsigned int *v5; // rax

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      *a3 = 2;
      v5 = (unsigned int *)&unk_18021BBD0;
    }
    else
    {
      v5 = 0LL;
      *a3 = 0;
    }
  }
  else
  {
    *a3 = 3;
    v5 = (unsigned int *)&unk_18021BBD8;
  }
  *a4 = v5;
}
