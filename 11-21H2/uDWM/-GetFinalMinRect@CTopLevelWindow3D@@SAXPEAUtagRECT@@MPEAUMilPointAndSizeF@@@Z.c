/*
 * XREFs of ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x18001068C
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::GetFinalMinRect(struct tagRECT *a1, float a2, struct MilPointAndSizeF *a3)
{
  int v3; // eax
  CDesktopManager *v4; // r9
  float v5; // xmm3_4

  v3 = 0;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  if ( a1->right - a1->left >= 0 )
    v3 = a1->right - a1->left;
  v5 = (float)v3 * *((float *)CDesktopManager::s_pDesktopManagerInstance + 165);
  *((float *)a3 + 2) = v5;
  *((float *)a3 + 3) = v5 * a2;
  *(float *)a3 = (float)(v5 * *((float *)v4 + 166)) + (float)a1->left;
  *((float *)a3 + 1) = (float)a1->top - (float)(v5 * a2);
}
